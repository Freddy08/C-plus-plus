#include <stdio.h>
#include <stdlib.h>
#include "ArbolAVL.h"
#include "NodoAVL.h"

ArbolAVL * Arbolito;


// Programa Principal
//-------------------
int main(int argc, char * argv)
{	
	// Ejemplo 1
	//----------
	Arbolito = new ArbolAVL();
	Arbolito->insertar(50); Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(45);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(55);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(40);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(60);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(35);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(65);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(1);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(20);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(16);	Arbolito->mostrar(INORDER,40,2);			
	Arbolito->insertar(0);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(57);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(25);	Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(24);	Arbolito->mostrar(INORDER,40,2);
	delete Arbolito;

	/*
	Arbolito = new ArbolAVL();
	
	Arbolito->insertar(77); Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(40); Arbolito->mostrar(INORDER,40,2);
	Arbolito->insertar(46); Arbolito->mostrar(INORDER,40,2);	
	delete Arbolito;
	*/
	return 0;
}

