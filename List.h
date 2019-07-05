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
	void remove(T e, int flag = RmOnlyFirst);//�Ƴ�ĳ�����
	T find(int index);//���ҽ��
	bool isEmpty();//�ж��Ƿ�Ϊ��
	int size();//������
	void show();//��ʾ����
	void resShow();//��������ʾ
	void removeAll();//ɾ��ȫ�����
public:
	enum removeType //remove����ɾ������
	{
		RmOnlyFirst = 0,	//ֻɾ����һ����ȵ�����
		RmAll				//ɾ��������ȵ�����
	};
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
	//β�巨
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
inline void List<T>::remove(T e, int flag) //C++��Ĭ�ϲ���ֻ��������ʱ������
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



