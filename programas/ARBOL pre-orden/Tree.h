#ifndef Tree_h
#define Tree_h
#include "Node.h"

#define PREORDER  1
#define POSTORDER 2
#define INORDER   3

// Clase Principal para el Arbol
//------------------------------
class Tree
{
private:	 
	Node * root;											// Raiz
	void Insert(int value, Node * &pNode);					// Insertar
	void PrintTree(Node * pNode, int type, int x, int y, int nivel);	// Mostrar
	int Mayor(Node * &pNode);
	int search(Node * &pNode, int val);
	int Menor(Node * &pNode);
	int MaxAlt(int a, int b);
	int altura(Node *nodo);
	 Node * borraraux(Node ** arbol, int valor);
		Node * minimo(Node * arbol);
		Node * maximo(Node * arbol);

public:
	Tree();													// Constructor
	~Tree();												// Destructor
	void Add(int value);									// Agregar Nodo
	//void Remove(int key);									// Remover Nodo
	//void Search(int key);									// Buscar Nodo
	void Min();												// Minimo
	void Max();												// Maximo
	void Altura();
	void Buscar(int val);
	void Print(int type, int x, int y);						// Mostrar el arbol en la posicion x, y
	Node * borrar(Node ** arbol, int valor);
	void Borrar(int valor);
};
#endif