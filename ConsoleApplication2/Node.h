#pragma once

class Node {
public:
	int data;
	//Node *parent; //��������� �� ������������ ����, �� ������������
	Node *left, *right;
	//�����������, ������� ����, ��������� ������� ��������� �� NULL
	Node(int value) : data(value), left(nullptr), right(nullptr)
	{}
};
