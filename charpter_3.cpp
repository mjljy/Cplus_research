#include <iostream>
#include <limits>
using namespace std;

int main_3() 
{   // 变量
	int a;
	int a_a_;
	int a_a_1;
	cout << "size of " << sizeof(int) << endl;

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;


	int int_1 = 42;
	int int_2 = 07;
	int int_3 = 0xA;

	cout << "int  of " << sizeof(int) << " bytes" <<  endl;
	cout << "short  of " << sizeof(int) << " bytes" << endl;
	cout << "long  of " << sizeof(int) << " bytes" << endl;
	cout << "long long   of " << sizeof(int) << " bytes" << endl;
	cout  << endl;

	cout << "Maximum   values:" << endl;
	cout << "int:" << n_int <<  endl;
	cout << "short:" << n_short << endl;
	cout << "long:" << n_long << endl;
	cout << "long long:" << n_llong << endl;

	cout << "Maximum int   value = " <<  INT_MIN << endl;
	cout << "Bits per byte  = " << CHAR_BIT << endl;

	cout << "int_1 = " << int_1 << endl;
	cout << "int_2 = " << int_2 << endl;
	cout << "int_3 = " << int_3 << endl;
	cout << "-------------------" << endl;
	cout << "int_1 = " << int_1 << endl;
	// 修改 cout 显示整数的的方式
	// dec  十进制
	// 
	// 修改 cout 显示整数的的方式
	cout << hex;
	cout << "int_1 hex  " << int_1 << endl;
	cout << oct;
	cout << "int_1 oct  " << int_1 << endl;

	return 0;


}