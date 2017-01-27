#include "Node.h"
#include <stdio.h>
// Constructor
//------------
Node::Node()
{
	this->left = this->right = NULL;
}

// Constructor con parámetro
//--------------------------
Node::Node(int value)
{
	this->data = value;
	this->left = this->right = NULL;
}

// Destructor para liberar memoria 
// utilizada por el nodo
//--------------------------------
Node::~Node()
{
	delete this->left;
	delete this->right;
}
