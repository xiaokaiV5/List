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
	void remove(T index);//移除某个结点
	T find(int index);//查找结点
	bool isEmpty();//判断是否为空
	int size();//链表长度
	void show();//显示链表
	void resShow();//链表反向显示
	void removeAll();//删除全部结点
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

	Node<T> *temp = new Node<T>;
	while (temp->next != ln.tail)
	{

	}

}

template <typename T>
List<T>::~List()
{
}

template<typename T>
inline void List<T>::add(T e)
{
	head->next->prev = e;
	head->next = e;
	

}

template<typename T>
inline void List<T>::ascSort()
{
}

template<typename T>
inline void List<T>::remove(T index)
{
}

template<typename T>
inline T List<T>::find(int index)
{
	return T();
}

template<typename T>
inline bool List<T>::isEmpty()
{
	return false;
}

template<typename T>
inline int List<T>::size()
{
	return 0;
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



