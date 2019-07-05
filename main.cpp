#include <iostream>
#include "List.h"
using namespace std;


int main()
{
	List<int>* dataList = new List<int>;
	dataList->add(5);
	dataList->add(10);
	dataList->remove(5);
	delete dataList;
	getchar();
	return 0;
}