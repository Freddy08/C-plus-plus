#include "ArbolAVL.h"
#include "consola.h"
#include <iostream>

using namespace std;

// Constructor
//------------ArbolAVL::ArbolAVL() {
	(raiz) = NULL;	
}

// Destructor
//-----------
ArbolAVL::~ArbolAVL() {
	delete (raiz);
}

// Calcular el máximo de dos números
//----------------------------------
int maximo(int a, int b)
{
	if (a>b)
		return a;
	else
		return b;
}

// calcular la altura del árbol
//-----------------------------
int ArbolAVL::altura(NodoAVL * arbol)
{
	if (arbol == NULL)
		return -1;
	else
		return 1 + maximo(altura(arbol->derecho),altura(arbol->izquierdo));
}

int ArbolAVL::factorbalance(NodoAVL * arbol)
{
	if(arbol == NULL)
		return 0;
	else		 
		return altura(arbol->izquierdo)-altura(arbol->derecho);
	
}

// agregar un valor al arbol
//--------------------------
void ArbolAVL::insertar(int valor)
{
	this->insertaraux(&this->raiz,valor);
}

// metodo auxiliar para agregar un nodo al árbol
//----------------------------------------------
void ArbolAVL::insertaraux(NodoAVL ** arbol, int valor)
{
   if( (*arbol) == NULL)
   {
		(*arbol) = new NodoAVL;
		(*arbol)->dato = valor;
		(*arbol)->izquierdo = (*arbol)->derecho = NULL;
   } 
   else 
   {
   		if(valor < (*arbol)->dato)
		{
      		insertaraux(&(*arbol)->izquierdo, valor);
		}
		else
		{
       		insertaraux(&(*arbol)->derecho, valor);
		}
   }
 mostrar(INORDER,40,2);
 balancearExp(&(*arbol));
}

// encontrar el nodo mínimo de un árbol
//-------------------------------------
NodoAVL * ArbolAVL::minimo(NodoAVL * arbol)
{
  NodoAVL * temp;
  temp = arbol->izquierdo;
  while (temp->izquierdo != NULL)
	temp = arbol->izquierdo;
  return temp;
}

// borrar un nodo del árbol, y devolverlo
//---------------------------------------
NodoAVL * ArbolAVL::borrar(NodoAVL ** arbol, int valor)
{
	borraraux(&(*arbol), valor);
	balancear(&(*arbol));
	return (*arbol);
	
}

// borrar un nodo del árbol, y devolverlo
//---------------------------------------
NodoAVL * ArbolAVL::borraraux(NodoAVL ** arbol, int valor)
{	
	if ((*arbol)==NULL)
   	 return NULL;

       if((*arbol)->dato==valor){

	   // if que compara si es Hoja
	   //--------------------------
       if((*arbol)->izquierdo==NULL && (*arbol)->derecho==NULL)
       {
       	(*arbol)=NULL;
          delete(*arbol);
          return NULL;
       }

		//if que compara si es 1 hijo
       if((*arbol)->izquierdo==NULL) return (*arbol)->derecho;
       if((*arbol)->derecho==NULL)   return (*arbol)->izquierdo;

       NodoAVL * temp;
       temp = minimo((*arbol)->derecho);
       (*arbol)->dato = temp->dato;
       (*arbol)->derecho = borrar (&(*arbol)->derecho,temp->dato);

       return (*arbol);
     }
     else if ((*arbol)->dato > valor)
     {
        (*arbol)->izquierdo = borrar(&(*arbol)->izquierdo, valor);
       	return (*arbol);
     }
     else
     {
        (*arbol)->derecho = borrar(&(*arbol)->derecho, valor);
         return (*arbol);
     }		 
}


// Método Privado PrintTree para mostrar el arbol
// pNode : nodo
// type  : tipo de arbol
// x     : posicion en x
// y     : posicion en y
//-----------------------------
void ArbolAVL::mostraraux(NodoAVL * pNode, int type, int x, int y, int nivel, int dir)
{
	if (pNode != NULL)
	{
		switch(type)
		{
		case PREORDER:
			gotoxy(x,y); cout<<"("<<pNode->dato<<")"<<endl;
			mostraraux(pNode->izquierdo,type,x-(ancho / (2 * nivel) ),y+nivel,nivel+1,1);
			mostraraux(pNode->derecho,type,x+(ancho / (2 * nivel) ),y+nivel,nivel+1,2);
			break;
		case INORDER:	
			mostraraux(pNode->izquierdo,type,x-(ancho / (2 * nivel) ),y+nivel,nivel+1,1);
			switch(dir)
			{
				case 0:
					gotoxy(x,y-1); cout<<"|"<<endl;
				break;
				case 1:
					gotoxy(x+2,y-1); cout<<"/"<<endl;
				break;
				case 2:
					gotoxy(x,y-1); cout<<"\\"<<endl;
				break;
			}
			gotoxy(x,y); cout<<"("<<pNode->dato<<")"<<endl;
			mostraraux(pNode->derecho,type,x+(ancho / (2 * nivel) ),y+nivel,nivel+1,2);
			break;
		case POSTORDER:
			mostraraux(pNode->izquierdo,type,x-(ancho / (2 * nivel) ),y+nivel,nivel+1,1);
			mostraraux(pNode->derecho,type,x+(ancho / (2 * nivel) ),y+nivel,nivel+1,2);
			gotoxy(x,y); cout<<"("<<pNode->dato<<")"<<endl;
			break;
		}
	}
}

// Método Público Print para mostrar un nodo 
// en el arbol
// type: tipo IN, PRE, POST
// x: posicion en x 
// y: posicion en y
//---------------------------------------
void ArbolAVL::mostrar(int type, int x, int y)
{
	clrscr();
	this->mostraraux(this->raiz,type,x,y,1,0);
}

// balance del arbol 
//------------------
void ArbolAVL::balancear(NodoAVL ** arbol)
{
	if((*arbol) != NULL)
	{
		if ( altura((*arbol)->izquierdo) - altura ((*arbol)->derecho) == 2 ) {
			if ( altura ((*arbol)->izquierdo->izquierdo) >= altura ((*arbol)->izquierdo->derecho))
				rotacion_simple(&(*arbol),2);
			else
				rotacion_doble(&(*arbol),2);
			
		} else if ( altura ((*arbol)->derecho) - altura ((*arbol)->izquierdo) == 2 ) {
			if ( altura ((*arbol)->derecho->derecho) >= altura ((*arbol)->derecho->izquierdo))
				rotacion_simple(&(*arbol),1);
			else
				rotacion_doble(&(*arbol),1);
		}
		(*arbol)->factor= altura ((*arbol)->derecho) - altura ((*arbol)->izquierdo);
	}
}

void ArbolAVL::balancearExp(NodoAVL ** arbol)
{
	int hizq, hder;
	int hizqizq, hizqder;
	int hderder, hderizq;

	if((*arbol) != NULL)
	{
		hizq = altura((*arbol)->izquierdo);
		hder = altura ((*arbol)->derecho);
		if ( hizq - hder == 2 ) {
			hizqizq = altura ((*arbol)->izquierdo->izquierdo);
			hizqder = altura ((*arbol)->izquierdo->derecho);
			if ( hizqizq >= hizqder )
				rotacion_simple(&(*arbol),2);
			else
				rotacion_doble(&(*arbol),2);
			
		} else if ( hder - hizq == 2 ) {
			hderder = altura ((*arbol)->derecho->derecho);
			hderizq = altura ((*arbol)->derecho->izquierdo);
			if ( hderder >= hderizq )
				rotacion_simple(&(*arbol),1);
			else
				rotacion_doble(&(*arbol),1);
		}
		(*arbol)->factor= altura ((*arbol)->derecho) - altura ((*arbol)->izquierdo);
	}

}


// rotacion simple de nodos  (direccion) 1=derecha o 2=izquierda
//--------------------------------------------------------------
void ArbolAVL::rotacion_simple(NodoAVL **arbol, int direccion)
{
	NodoAVL * c;
	// izquierda
	//----------
	if ( direccion == 1 )
	{ 
		c = (*arbol)->derecho;
		(*arbol)->derecho = c->izquierdo;
		c->izquierdo = (*arbol);
	}
	// derecha
	//----------
	else
	{
		c = (*arbol)->izquierdo;
		(*arbol)->izquierdo = c->derecho;
		c->derecho = (*arbol);
	}
	(*arbol) = c;
}

// rotacion doble de nodos
//------------------------
void ArbolAVL::rotacion_doble(NodoAVL **arbol, int direccion) 
{
	if ( direccion == 1 )
	{
		rotacion_simple(&(*arbol)->derecho, 2);
		rotacion_simple(&(*arbol), 1);
	}
	else 
	{
		
		rotacion_simple(&(*arbol)->izquierdo, 1);
		rotacion_simple(&(*arbol), 2);
	}

}
