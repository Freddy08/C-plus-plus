#include "Tree.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Consola.h"
using namespace std;

#define ancho 25

int NumMax=0;
int NumMin=100000;
// Método Privado PrintTree para mostrar el arbol
// pNode : nodo
// type  : tipo de arbol
// x     : posicion en x
// y     : posicion en y
//-----------------------------
void Tree::PrintTree(Node * pNode, int type, int x, int y, int nivel)
{
	if (pNode != NULL)
	{
		switch(type)
		{
		case PREORDER:
			if(nivel==1)
			   textcolor(RED);
			if(nivel==2)
			   textcolor(BLUE);
				if(nivel==3)
			   textcolor(YELLOW);

			//textcolor(nivel);
			gotoxy(x,y); cout<<"("<<pNode->data<<")"<<endl;
			//PrintTree(pNode->left,type,x-x/nivel,y++,nivel+=3);
			//PrintTree(pNode->right,type,x+x/nivel,y++,nivel+=3);
			PrintTree(pNode->left,type,x-(ancho / (2 * nivel) ),y+nivel,nivel+1);
			PrintTree(pNode->right,type,x+(ancho / (2 * nivel) ),y+nivel,nivel+1);
			break;
		case INORDER:	
			PrintTree(pNode->left,type,x-(ancho / (2 * nivel) ),y+nivel,nivel+1);
			gotoxy(x,y); cout<<"("<<pNode->data<<")"<<endl;
			PrintTree(pNode->right,type,x+(ancho / (2 * nivel) ),y+nivel,nivel+1);
			break;
		case POSTORDER:
			PrintTree(pNode->left,type,x-(ancho / (2 * nivel) ),y+nivel,nivel+1);
			PrintTree(pNode->right,type,x+(ancho / (2 * nivel) ),y+nivel,nivel+1);
			gotoxy(x,y); cout<<"("<<pNode->data<<")"<<endl;
			break;
		}
	}
}

// Método Privado Insertar para agregar un nodo 
// en el arbol
// pNode : nodo
// type  : tipo de arbol
// x     : posicion en x
// y     : posicion en y
//----------------------------------------------
void Tree::Insert(int value,  Node * &pNode)
{
	if ( pNode == NULL)
	{
		pNode = new Node(value);
	}
	else {
		if ( value < pNode->data )
			Insert(value,pNode->left);
		else
			Insert(value,pNode->right);
	}
}

// Constructor del arbol
//----------------------
Tree::Tree()
{
	this->root = NULL;	 
}

// Destructor del arbol
//----------------------
Tree::~Tree()
{
	delete this->root;
}

// Método Público Add para agregar un nodo 
// en el arbol
// value: valor que pondremos en el árbol
//---------------------------------------
void Tree::Add(int value)
{
	Insert(value,this->root);
}


//void Tree::Remove(int key)
//{
//}



// Método Público Print para mostrar un nodo 
// en el arbol
// type: tipo IN, PRE, POST
// x: posicion en x 
// y: posicion en y
//---------------------------------------
void Tree::Print(int type, int x, int y)
{
	this->PrintTree(this->root,type,x,y,1);
}



//___________________________________________________
//________busqueda del numero mayor__________________
//este es el metodo privado interno
int Tree::Mayor(Node * &pNode){
	
	if(pNode!=NULL){
		NumMax=pNode->data;
		Mayor(pNode->right);
	}

	
return NumMax;
}
//este es el que el usuario usa
void Tree::Max()
{

	int max=0;
	max=Mayor(root);
	cout<<max;
}
//__.._-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-___________


int Tree::search(Node * &pNode,int val){
	
	if(pNode!=NULL){
		if(pNode->data==val){
			gotoxy(1,23);
			cout<<"El numero existe en el arbol"<<endl;
			return 0;
		}
	   if(pNode->data>val){
		   search(pNode->left,val);}
	   else if(pNode->data <  val){
		   search(pNode->right,val);}
	
	}
	else{
		gotoxy(1,23);
		cout<<"El numero no existe en el arbol"<<endl;
	}

	return 0;

}

void Tree::Buscar(int val){
	
	search(root, val);
	
}

//__________________________________________________
//_________busqueda del numero menor________________

//metodo privado interno
int Tree::Menor(Node * &pNode){

   if(pNode!=NULL){
		NumMin=pNode->data;
		Menor(pNode->left);
	}
   return NumMin;
}
//el que usuario usa, el publico
void Tree::Min()
{
	int min=0;
	min=Menor(root);
	cout<<min;

}

//___________Para la altura_______________________
//metodo privado para encontrar cual hijo es el de mayor altura
int Tree::MaxAlt(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}
//este metodo es privado, el recursivo
int Tree::altura(Node *nodo){
	if(nodo==NULL)
		return -1;
	else
		return 1+MaxAlt(altura(nodo->left),altura(nodo->right));

}
//metodo publico que el usuario usa
void Tree::Altura(){
    int Alto=0;
	Alto=altura(this->root);
	cout<<Alto;
}

//____________________________________________________________________---

Node * Tree::minimo(Node * arbol)
{
  Node *temp;
    if(arbol!=NULL){
  if(arbol->right!=NULL)
  temp = arbol->right;
  else
	  return  arbol;

  while (temp->right != NULL)
  	temp = arbol->right;
  return temp;
	}
	return NULL;
}


Node * Tree::maximo(Node * arbol)
{
  Node *temp;
   if(arbol!=NULL){
  if(arbol->left!=NULL)
  temp = arbol->left;
  else
	  return  arbol;

  while (temp->left != NULL)
  	temp = arbol->left;
  return temp;
   }
   return NULL;
}


Node * Tree::borrar(Node ** arbol, int valor)
{
	borraraux(&(*arbol), valor);
	return (*arbol);
	
}

Node * Tree::borraraux(Node ** arbol, int valor)
{	
	if ((*arbol)==NULL)
   	 return NULL;

       if((*arbol)->data==valor){

	   // if que compara si es Hoja
	   //--------------------------
       if((*arbol)->right==NULL && (*arbol)->left==NULL)
       {
       	(*arbol)=NULL;
          delete(*arbol);
          return NULL;
       }

		//if que compara si es 1 hijo
     // 
	  
	   if((*arbol)->right!=NULL){
     Node *temp;
       temp = minimo((*arbol)->right);
       (*arbol)->data = temp->data;
	   (*arbol)->right = borrar (&(*arbol)->right ,temp->data);
		 return (*arbol);
		}

		 if((*arbol)->left!=NULL){
       Node *temp;
       temp = maximo((*arbol)->left);
       (*arbol)->data = temp->data;
	   (*arbol)->left = borrar (&(*arbol)->left ,temp->data);
		 return (*arbol);
		}



	   // if((*arbol)->right==NULL) return (*arbol)->right;
        //if((*arbol)->left==NULL)   return (*arbol)->left;

       return (*arbol);
     }

//__________________________________________________________________________

     else if ((*arbol)->data > valor)
     {
        (*arbol)->left = borrar(&(*arbol)->left, valor);
       	return (*arbol);
     }
     else
     {
        (*arbol)->right = borrar(&(*arbol)->right, valor);
         return (*arbol);
     }		 
}

void Tree::Borrar(int val){
	borraraux(&(root),val);
}