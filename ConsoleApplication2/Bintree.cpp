#include "stdafx.h"
#include "Bintree.h"

void Bintree::add_leaf(int value, Node *& ro)
{
	if (ro == nullptr) {
		ro = new Node(value);
		size++;
		return;
	}
	if (ro->right == nullptr && value > ro->data)
	{
		ro->right = new Node(value);
		size++;
	}
	if (ro->left == nullptr && value < ro->data)
	{
		ro->left = new Node(value);
		size++;
	}

	if (value > ro->data)
	{
		add_leaf(value, ro->right);
	}
	if (value < ro->data)
	{
		add_leaf(value, ro->left);
	}
}

void Bintree::print(Node *& ro)
{
	if (ro == nullptr)
		return;
	std::cout << ro->data << "\n";
	print(ro->left);
	print(ro->right);
}

int Bintree::sum(Node *& ro)
{
	if (ro == nullptr)
		return 0;
	return ro->data + sum(ro->left) + sum(ro->right);
}

void Bintree::destruct_tree(Node *& ro)
{
	if (ro != nullptr) {
		destruct_tree(ro->left);
		destruct_tree(ro->right);
		delete ro;
	}
}

Bintree::~Bintree()
{
	destruct_tree(root);
}