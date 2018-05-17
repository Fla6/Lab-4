#pragma once

#include "Node.h"
#include <iostream>

class Bintree
{
public:
	
	Node * root;
	Bintree() : root(nullptr) {}
	int size=0;
	void add_leaf(int value, Node *& ro);
	void print(Node *& ro);
	void destruct_tree(Node *& ro);
	int sum(Node *& ro);
	~Bintree();
};
