#include <iostream>
#include "List.h"
using namespace std;


int main()
{
	List<int>* dataList = new List<int>;
	cout << "-1-1-1-1" << endl;
	for (int i = 0; i<10000; ++i)
	{
		dataList->add(i);
		dataList->add(i*10);
		//dataList->add(i / 10);
		
	}
	dataList->add(5);
	dataList->add(10);
	dataList->remove(5);
	cout << "000" << endl;
	dataList->show();
	cout << "111" << endl;
	delete dataList;
	getchar();
	return 0;
}