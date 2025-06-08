#include <iostream>
using namespace std;

/*
复合类型
*/

int main45()
{
	union one4all
	{

		int  int_val;
		int  int_val1;
		long long_val;
		double double_val;

	};

	one4all pail;
	pail.int_val = 15;  // store an int 
	pail.int_val1 = 15;  // store an int 
	cout << "pail.int_val=  " << pail.int_val << endl;
	cout << "pail.int_val1=  " << pail.int_val1 << endl;
	pail.double_val = 15; // store an double , int value is lost
	cout << "pail.double_val=  " << pail.double_val << endl;
	cout << "pail.int_val=  " << pail.int_val << endl;   // result is 0
	cout << "pail.int_val1=  " << pail.int_val1 << endl;   // result is 0
	

	return 0;
}