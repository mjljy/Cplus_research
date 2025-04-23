#include <iostream>
#include <limits>
using namespace std;

int main() 
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
	cout << "INT_MAX :" << n_int <<  endl;
	cout << "SHRT_MAX:" << n_short << endl;
	cout << "LONG_MAX:" << n_long << endl;
	cout << "LLONG_MAX:" << n_llong << endl;

	cout << "INT_MIN  value = " <<  INT_MIN << endl;
	cout << "SHRT_MIN  value = " << SHRT_MIN << endl;
	cout << "LONG_MIN  value = " << LONG_MIN << endl;
	cout << "LLONG_MIN  value = " << LLONG_MIN << endl;

	int zz;
	int zz1(234);

	cout << "zz1  = " << zz1 << endl;
	//cout << "zz没有初始化  = " << zz << endl;

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
	cout << "无符号-------------------溢出的研究" << endl;

	cout << "无符号 最大值 " << USHRT_MAX <<endl;
	unsigned int x1 = USHRT_MAX;
	cout << "USHRT_MAX =          " << USHRT_MAX << endl;
	cout << "unsigned x1 =          " << x1 << endl;
	cout << "无符号 最大值 + 1 " << x1+1  << endl;
	unsigned int x2 = 0;
	cout << "unsigned x2 =          " << x2 << endl;
	cout << "无符号      0 - 1 " << x2 - 1 << endl;
	cout << "-------------------溢出的研究" << endl;

	cout << "有符号-------------------溢出的研究" << endl;
	short int x11 = SHRT_MAX;
	cout << "SHRT_MAX =          " << SHRT_MAX << endl;
	cout << "short int x11 =          " << x11 << endl;
	cout << "有符号 short 最大值 + 1 " << x11 + 1 << endl;
	short int x12 = SHRT_MIN;
	cout << "SHRT_MIN =          " << SHRT_MIN << endl;
	cout << "int     x12 =          " << x12 << endl;
	cout << "有符号 short 最小值- 1 " << x12 - 1 << endl;
	cout << "-------------------溢出的研究" << endl;

	return 0;


}