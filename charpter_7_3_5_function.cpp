#include <iostream>
using namespace std;
int main()
{

	const int a = 10;
	const int * p = &a;
	//int* p = &a; Error

	cout << "a=" << a << endl;
	cout << "p=" << p << endl;
	cout << "*p=" << *p << endl;
	//a = 11 // Error
	cout << "-----------------------------"<< endl;
	int a1 = 10;
	const int * p1 = &a1;

	cout << "a1=" << a1 << endl;
	cout << "p1=" << p1 << endl;
	cout << "*p1=" << *p1 << endl;
	a1 = 11;
	cout << "a1 =11-----------------" << endl;
	cout << "a1=" << a1 << endl;
	cout << "p1=" << p1 << endl;
	cout << "*p1=" << *p1 << endl;
	cout << "-----------------------------" << endl;
	cout << "非const指针赋给const指针是可以的" << endl;

	int b = 10;
	int * q = &b;
	const int * qq = q;
	//int* p = &a; Error

	cout << "b=" << b << endl;
	cout << "q=" << q << endl;
	cout << "*q=" << *q << endl;
	cout << "*qq=" << *qq << endl;


	cout << "-----------------------------" << endl;

	const int * * p3 = &p1;

	cout << "*p3=" << **p3 << endl;






	return 0;
}
