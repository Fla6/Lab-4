#include "stdafx.h"
#include <iostream>
#include "Bintree.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Bintree obj_test;
	obj_test.add_leaf(104,obj_test.root);
	obj_test.add_leaf(50, obj_test.root);
	obj_test.add_leaf(30, obj_test.root);
	obj_test.add_leaf(40, obj_test.root);
	obj_test.add_leaf(120, obj_test.root);
	obj_test.print(obj_test.root);
	cout << "\nСреднее арифметическое: " << float(obj_test.sum(obj_test.root)) / float(obj_test.size) << endl;
	return 0;
}