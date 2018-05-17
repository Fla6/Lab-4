#pragma once

class Node {
public:
	int data;
	//Node *parent; //Указатель на родительский узел, не используется
	Node *left, *right;
	//Конструктор, создает узлы, указатели которых указывают на NULL
	Node(int value) : data(value), left(nullptr), right(nullptr)
	{}
};
