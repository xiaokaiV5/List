#pragma once

#include <iostream>
using namespace std;

class ListNode
{
public:
	ListNode();
	~ListNode();
	bool hasCycle();
public:
	ListNode* next;
	ListNode* prev;
protected:
	
private:
};


