#pragma once

#include "Node.h"
#include <iostream>
template <typename T>

class List
{
public:
	List();//默认构造函数
	List(const List& ln);//拷贝构造函数
	~List();//析构函数
	void add(T e);//向链表添加数据
	void ascSort();//升序排序
	void remove(T e, int flag = RmOnlyFirst);//移除某个结点
	T find(int index);//查找结点
	bool isEmpty();//判断是否为空
	int size();//链表长度
	void show();//显示链表
	void resShow();//链表反向显示
	void removeAll();//删除全部结点
public:
	enum removeType //remove函数删除方法
	{
		RmOnlyFirst = 0,	//只删除第一个相等的数据
		RmAll				//删除所有相等的数据
	};
private:
	Node<T> *head;	//头结点
	Node<T> *tail;	//尾结点
	int length;

};

template <typename T>
List<T>::List()
{
	head = new Node<T>;
	tail = new Node<T>;
	head->next = tail;
	head->prev = nullptr;
	tail->next = nullptr;
	tail->prev = head;
	length = 0;
}

template <typename T>
List<T>::List(const List& ln)
{
	head = new Node<T>;
	tail = new Node<T>;
	head->next = tail;
	head->prev = nullptr;
	tail->next = nullptr;
	tail->prev = head;
	length = 0;

	Node<T> *temp = ln.head;
	while (temp->next != ln.tail)
	{
		temp = temp->next;
		tail->data = temp->data;
		Node<T>* p = new Node<T>;
		p->prev = tail;
		p->next = nullptr;
		tail = p;
		length++;
	}
}

template <typename T>
List<T>::~List()
{
	if (length == 0)
	{
		delete head;
		delete tail;
		head = nullptr;
		tail = nullptr;
		return ;
	}

	Node<T>* p = nullptr;
	while (head->next !=tail)
	{
		p = head;
		head = head->next;
		delete p;
	}
	delete head;
}

template<typename T>
inline void List<T>::add(T e)
{
	
	Node<T>* p = new Node<T>;
	p->data = e;
	//尾插法
	p->prev = tail->prev;
	p->next = tail;
	tail->prev->next = p;
	tail->prev = p;
	length++;
	std::cout << "add:" << e << " len:" << length << std::endl;
}

template<typename T>
inline void List<T>::ascSort()
{

}

template<typename T>
inline void List<T>::remove(T e, int flag) //C++的默认参数只能在声明时声明。
{
	if (length == 0)
	{
		std::cout << "List is empty." << std::endl;
	}

	Node<T>* p = head->next;
	Node<T>* n = nullptr;
	while (p->next!=tail)
	{
		if (p->data == e)
		{
			n = p->next;
			p->prev->next = p->next;
			p->next->prev = p->prev;
			delete p;
			p = nullptr;
			length--;
			std::cout << "remove:" << e << " len:" << length << std::endl;
			if (flag == RmOnlyFirst)
				break;
			else
				p = n;
		}
	}
}

template<typename T>
inline T List<T>::find(int index)
{
	return T();
}

template<typename T>
inline bool List<T>::isEmpty()
{
	if (length==0)
	{
		return true;
	} 
	else
	{
		return false;
	}
}

template<typename T>
inline int List<T>::size()
{
	return length;
}

template<typename T>
inline void List<T>::show()
{
}

template<typename T>
inline void List<T>::resShow()
{
}

template<typename T>
inline void List<T>::removeAll()
{
}



