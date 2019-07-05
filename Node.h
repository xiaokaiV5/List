#pragma once
template <typename T>

class Node
{
public:
	//Node();
	//~Node();
	Node<T>* prev;
	Node<T>* next;
	T Data;
};


