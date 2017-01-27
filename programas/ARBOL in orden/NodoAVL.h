#ifndef NodoAVL_h
#define NodoAVL_h

// Clase NodoAVL
//-----------
class NodoAVL {
	public:
		// Factor de balance
		//------------------
		int factor;

		// Valor
		//------
		int dato;

		// Subarbol izquierdo
		//-------------------
		NodoAVL * izquierdo;
		
		// Subarbol derecho
		//-----------------
		NodoAVL * derecho;		

		// Constructor
		//------------
		NodoAVL();

		// Constructor con valor incial
		NodoAVL(int valor);

		// Destructor
		//-----------
		~NodoAVL();
	};
#endif