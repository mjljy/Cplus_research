#include <iostream>
using namespace std;
 
int main()
{
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
	int * p_updates;
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

	/* ָ��ֻ��������ʼ�� ������ֵ�� ��֪�� ��������Ч�Ĳ���ʹ�õģ����˾ͱ���*/
	int* p_higgens1;
	cout << "p_higgens1= " << *p_higgens1 << endl; 
	return 0;
}