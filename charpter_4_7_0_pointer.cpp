#include <iostream>
using namespace std;
 
int main47()
{/*
 
 	int * p1 = 10; 数字常量没有内存地址 不可以这么使用
 */


	int home;
	int home1;
	home = 9;
	home1 = 10.0;
	cout << "int  of " << sizeof(int) << " bytes" << endl;
	cout << "home = " << home << endl;
	cout << "home point = " << &home << endl;
	cout << "home1 = " << home1 << endl;
	cout << "home1 point = " << &home1 << endl;
	cout << "home1 point  - home point  = " << &home1 - &home << endl;

	cout << "---------------------------------------" << endl;

	int updates = 6;
	int * p_updates; // 指针的声明
	p_updates = &updates;
	cout << "updates value = " << updates << endl;
	cout << "updates value use address= " << * p_updates << endl;

	cout << "updates address = " << &updates << endl;
	cout << "p_updates  = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "updates value = " << updates << endl;


	cout << "---------------------------------------" << endl;
	int higgens = 5;
	int* p_higgens = &higgens;

	cout << "p_higgens  = " << p_higgens << endl;
	cout << "higgens value use address= " << *p_higgens << endl;

	/* 指针只声明不初始化 里面有值吗？ 不知道 但是是无效的不能使用的，用了就报错 */
	int* p_higgens1;
	//cout << "p_higgens1= " << *p_higgens1 << endl; 

	cout << "---------------------------------------" << endl;

	int* pt = new int;  // 指针的声明 和初始化 动态使用
	int nights = 100;
	*pt = 100;
	cout << "nights  = " << nights << endl;
	cout << "*pt  = " << pt << endl;
	cout << "nights addre = " << &nights << endl;
	cout << "pt  = " << pt << endl;

	double * pn = new double;
	*pn = 100.01;

	cout << "*pn  = " << pn << endl;
	cout << "pn  = " << pn << endl;

	cout << "---------------------------------------" << endl;
	cout << "pn  = " << pn << endl;
	delete pn;
	cout << "pn  = " << pn << endl;


	cout << "-------------------------------------" << endl;

	cout << "creat dynamic array" << endl;
	double* p3 = new double[3] {0.5,0.6,0.7};
	cout << "p3 [0]  = " << * p3 << endl;
	p3 = p3 + 1;
	cout << "p3 [1]  = " << *p3 << endl;
	p3 = p3 + 1;
	cout << "p3 [2]  = " << *p3 << endl;
	p3 = p3 - 2 ;
	delete [] p3;


	//  这里的操作 都没有设计到    把另一个数据的地址 赋值给new的变量
	//

	return 0;
}