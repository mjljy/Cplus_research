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




	return 0;
}