#pragma once

#include "Node.h"
#include <iostream>
template <typename T>

class List
{
public:
	List();//Ĭ�Ϲ��캯��
	List(const List& ln);//�������캯��
	~List();//��������
	void add(T e);//�������������
	void ascSort();//��������
	void remove(T index);//�Ƴ�ĳ�����
	T find(int index);//���ҽ��
	bool isEmpty();//�ж��Ƿ�Ϊ��
	int size();//������
	void show();//��ʾ����
	void resShow();//��������ʾ
	void removeAll();//ɾ��ȫ�����
private:
	Node<T> *head;	//ͷ���
	Node<T> *tail;	//β���
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



