#include<iostream>
using namespace std;
int main482() {
	/*
	指针的算术运算

	整型int 加减
	指针之间的加减
	指针之间的不等式比较

	*/

	int ar[5] = { 1,2,3,4,5 };
	int* p = ar;

	cout << "p = " << p << endl; 
	cout << "ar = " << ar << endl;
	cout << "ar = p = " << (ar==p) << endl;

	cout << "ar[0] = *p = " << *p << endl;
	cout << "ar[0] = ar[0] = " << ar[0] << endl;

	cout << "--------------------------------------" << endl;
	cout << "&ar[1] = (p+1) = " << ( &ar[1] == (p + 2)) << endl;

	cout << "--------------------------------------" << endl;

	cout << "&ar[0] < (p+1) = " << (&ar[0] < (p + 1)) << endl;
	cout << "&ar[0] < (p+2) = " << (&ar[0] < (p + 2)) << endl;
	cout << "&ar[0] < (p+3) = " << (&ar[0] < (p + 3)) << endl;
	cout << "&ar[0] < (p+4) = " << (&ar[0] < (p + 4)) << endl;
	cout << "&ar[0] < (p+5) = " << (&ar[0] < (p + 5)) << endl;
	cout << "&ar[0] < (p+8) = " << (&ar[0] < (p + 8)) << endl;








	return 0;

}
