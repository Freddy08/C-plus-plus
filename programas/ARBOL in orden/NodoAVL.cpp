#include "NodoAVL.h"
#include <stdio.h>

// Constructor
//-----------
NodoAVL::NodoAVL() {
	factor = 0;
	izquierdo = derecho = NULL;	
}
// Constructor con valor inicial
//------------------------------
NodoAVL::NodoAVL(int valor) {
	dato = valor;
	factor = 0;
	izquierdo=derecho=NULL;
}
// Destructor liberaci�n de memoria utilizada
//-------------------------------------------
NodoAVL::~NodoAVL() {
	delete izquierdo;
	delete derecho;
}