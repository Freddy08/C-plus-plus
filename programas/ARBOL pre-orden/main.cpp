#include <windows.h>
#include <conio.h>
#include <iostream>
#include<windows.h>
#include <stdio.h>
#include "Tree.h"


using namespace std;
//Programa Principal
//-------------------
bool bandera=true;
int val;
int mayor=0;
int menor=10000000;
Tree * MiArbol;

int menu();
void acciones(int op);

int main(int argc, char * argv)
{
	
	//Tree * MiArbol;
	MiArbol = new Tree();
	
	

	while(bandera){
		int option=menu();
		switch(option){

	case '1':  
		int valor;
		cin>>valor;
		MiArbol->Add(valor);//
		break;

	 case '2': 
        system("cls");
		cout<<"El numero mayor es:...."<<endl;
		MiArbol->Max();
		MiArbol->Print(PREORDER,40,1);
		getch();
		break;

	 case '3':
		system("cls");
		cout<<"El numero menor es:...."<<endl;
		MiArbol->Min();
		MiArbol->Print(PREORDER,40,1);
		getch();

		break;


     case '4':
		 system("cls");
		cout<<"la altura es:...."<<endl;
		MiArbol->Altura();
		MiArbol->Print(PREORDER,40,1);
		getch();
		 break;
   
		   case '5':
		 system("cls");
		cout<<"Ingrese el valor a buscar.."<<endl;
		cin>>val;
		MiArbol->Buscar(val);
		MiArbol->Print(PREORDER,40,1);
		getch();
		 break;



	
      case '6':  
		   system("cls");
        cout<<"Escriba el valor a borrar.."<<endl;
		cin>>val;
		cout<<"El valor encontrado es:"<<endl;
		MiArbol->Borrar(val);
		MiArbol->Print(PREORDER,40,1);
		getch();
		 
		 break;

	  case '7':  
		 bandera=false;
		 break;
	
	
	                 }
		system("cls");

	              }

	MiArbol->Print(PREORDER,40,1);
	getch();
	return 0;
}


int menu(){
//	system("cls");
int option=0;
cout<<"Seleccione una opcion-...."<<endl;
cout<<"1. Ingresar valor"<<endl;
cout<<"2. Encontrar maximo valor del arbol"<<endl;
cout<<"3. Encontrar el minimo valor del arbol"<<endl;
cout<<"4. Encontrar altura"<<endl;
cout<<"5. Buscar"<<endl;
cout<<"6. Borrar"<<endl;
cout<<"7. Salir"<<endl;
option=getchar();
return option;
}
