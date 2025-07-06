#include <iostream>
using namespace std;
int main735()
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
	const int * qq = q; // 一个指针赋值给一个const指针 ok
	//int* p = &a; Error

	cout << "b=" << b << endl;
	cout << "q=" << q << endl;
	cout << "*q=" << *q << endl;
	cout << "*qq=" << *qq << endl;


	cout << "二级间接关系？ 对非const一个指针 对应非const变量 取地址  赋值给一个二级指针 非const是没问题的" << endl;
	// q 非const
	// qq const
	//const int * * qq1 = &q; // 指针变量都是非const 传递给二级指针const error
	//cout << "**qq1=" << **qq1 << endl;

	int * * qq2 = &q; // 指针变量都是非const 传递给二级指针非const ok
	cout << "**qq2=" << **qq2 << endl;

	//int** qq1 = &qq;    // 一级指针是const 二级指针非const Error 
	const int * * qq3 = &qq; // 一级指针是const 二级指针const  ok
	cout << "**qq3=" << **qq3 << endl;
	





	return 0;
}
