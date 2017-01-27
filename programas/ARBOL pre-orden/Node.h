#ifndef Node_h
#define Node_h

// Plantilla de un nodo
//---------------------
class Node
{
public:
	int data;		// Dato del Nodo
	Node * left;	// Nodo Izquierdo
	Node * right;	// Nodo Derecho
	Node();			// Constructor
	Node(int value);// Constructor con valor
	~Node();		// Destructor
};
#endif

