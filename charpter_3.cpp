#include <iostream>
#include <limits>
#include <typeinfo>
using namespace std;

int main31()
{   // 变量

/* 
1. 先看各个类型的占用字节数
2. 再看看各个类型的最大最小数值
3. 各个类型有哪些 
int    有符号和无符号 
short
long
long long

*/
	cout << "----------------------------- :" << endl;
	cout << "int  of " << sizeof(int) << " bytes" << endl;
	cout << "unsigned int  of " << sizeof(unsigned int) << " bytes" << endl;
	cout << "----------------------------- :" << endl;
	cout << "short int  of " << sizeof(short int) << " bytes" << endl;
	cout << "unsigned shortint  of " << sizeof(unsigned short int) << " bytes" << endl;
	cout << "----------------------------- :" << endl;
	cout << "long int  of " << sizeof(long int) << " bytes" << endl;
	cout << "unsigned long int  of " << sizeof(unsigned long int) << " bytes" << endl;
	cout << "----------------------------- :" << endl;
	cout << "long long int  of " << sizeof(long long int) << " bytes" << endl;
	cout << "long unsigned long int  of " << sizeof(unsigned long long int) << " bytes" << endl;
	cout << "----------------------------- :" << endl;


	cout << "SHRT_MIN  = " << SHRT_MIN << endl;
	cout << "SHRT_MAX  = " << SHRT_MAX << endl;
	cout << "USHRT_MAX  = " << USHRT_MAX << endl;
	cout << "----------------------------- :" << endl;
	cout << "INT_MIN  = " << INT_MIN << endl;
	cout << "INT_MAX  = " << INT_MAX << endl;
	cout << "UINT_MAX  = " << UINT_MAX << endl;
	cout << "----------------------------- :" << endl;
	cout << "LONG_MIN  = " << LONG_MIN << endl;
	cout << "LONG_MAX  = " << LONG_MAX << endl;
	cout << "ULONG_MAX  = " << ULONG_MAX << endl;
	cout << "----------------------------- :" << endl;



	// 修改 cout 显示整数的的方式
	// dec  十进制
	// 
	// 修改 cout 显示整数的的方式

	cout << "无符号-------------------溢出的研究" << endl;

	cout << "无符号 最大值 " << USHRT_MAX << endl;
	unsigned int x1 = USHRT_MAX;
	cout << "USHRT_MAX =          " << USHRT_MAX << endl;
	cout << "unsigned x1 =          " << x1 << endl;
	cout << "无符号 最大值 + 1 " << x1 + 1 << endl;
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
int main32()
{   // 变量



	cout << "无符号-------------------溢出的研究" << endl;

	cout << "无符号 最大值 " << USHRT_MAX << endl;
	unsigned short int x1 = USHRT_MAX;
	cout << "USHRT_MAX =          " << USHRT_MAX << endl;
	cout << "unsigned x1 =          " << x1 << endl;
	x1 = x1 + 1;
	cout << "无符号 最大值 + 1 " << x1 << endl;
	unsigned short int x2 = 0;
	cout << "unsigned x2 =          " << x2 << endl;
	x2 = x2 - 1;
	cout << "无符号      0 - 1 " << x2 << endl;
	cout << "-------------------溢出的研究" << endl;

	cout << "有符号-------------------溢出的研究" << endl;
	short int x11 = SHRT_MAX;
	cout << "SHRT_MAX =          " << SHRT_MAX << endl;
	cout << "short int x11 =          " << x11 << endl;
	x11 = x11 + 1;
	cout << "有符号 short 最大值 + 1 " << x11 << endl;
	cout << "SHRT_MIN =          " << SHRT_MIN << endl;
	short int x12 = SHRT_MIN;
	cout << "int     x12 =          " << x12 << endl;
	x12 = x12 - 1;
	cout << "有符号 short 最小值- 1 " << x12 << endl;
	cout << "-------------------溢出的研究" << endl;

	return 0;


}
int main33()
{   // 变量
	cout << "整型的展示" << endl;
	int a = 10000;
	cout << dec;
	cout << "a = " << a << endl;
	cout << oct;
	cout << "a = " << a << endl;
	cout << hex;
	cout << "a = " << a << endl;
	return 0;


}
int main34()
{   // 变量
	cout << "----------------------------- :" << endl;
	cout << "char  of " << sizeof(char) << " bytes" << endl;
	cout << "----------------------------- :" << endl;
	char ch;
	cout << "Enter a character:" << endl;
	cin >> ch;
	cout << "Hola" << endl;
	cout << "Thank you or the  " << ch << "   character. " << endl;
	return 0;
}
int main35()
{   // 变量
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for   " << ch << "   is  " << i << endl;

	cout << "Add one to the character code: " << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for   " << ch << "   is  " << i << endl;
	cout << "Displaying  chra ch using cout.put(ch): " ;
	cout.put(ch);
	cout.put('!');

	char i1 = ch;
	int i3 = i1;
	cout << "i3   cout " << i3 << endl;
	cout << "i1   cout "<< i1 << endl;
	i1 = i1 + 70; 
	cout << "i1   cout " << i1 << endl;
	int i2 = i1;
	cout << "The ASCII code for   " << i1 << "   is  " << i2 << endl;
	return 0;
}
int main36() {
	cout << "*  <<<<<" << '*' << endl;
	//cout.put('*');
	//cout << "\a"  << endl;
	cout << "------------------------" << endl;
	int k\u00F6rper;
	cout << "Let them eat g\u00E2teau.\n";
	cout << "------------------------" << endl;
	signed char char_x = 70;
	int int_x = char_x;
	cout << "The ASCII code for  70  int_x =  " <<  int_x << "   , signed  char -128-127   char_x  =  " <<  char_x << endl;
	cout << "------------------------" << endl;

	signed char char_y = 78;
	int int_y =  char_y;
	cout << "The ASCII code for  78  int_y =  " << int_y << "   , signed  char -128-127   char_y  =  " << char_y << endl;

	cout << "------------------------" << endl;


	char_y = char_y + 60;
	int_y = int_y + 60;
	int int_z = char_y;

	cout << "The ASCII code for  char_y + 70   " << char_y << "   int_y + 70  " << int_y << endl;
	cout << "The ASCII code for  char_y    " << int_z <<  endl;


	cout << "------------------------" << endl;

	char i2 = 'M';
	int x2 = i2;
	cout << "The ASCII code for   " << x2 << "   is  " << i2 << endl;
	i2 = i2 + 100;
	x2 = i2;
	cout << "The ASCII code for   " << x2 << "   is  " << i2 << endl;
	
	cout << "Type of a: " << typeid(i2).name() << endl;

	return 0;
}

int main37()
{
	wchar_t bob = L'p';
	wcout << " wchar_tbob = " << bob << endl;

	char16_t ch1 = u'q';
	char32_t ch2 = U'\U0000222B';

	cout << "char16_t ch1   " << ch1 << endl;
	cout << "char32_t ch2   " << ch2 << endl;

	return 0;
}

int main38()
{
	// float long 
	float x = 1.111;
	long y = 1.1111;
	float z = 7.3e10;

	cout << "x  " << x << endl;
	cout << "y  " << y << endl;
	cout << "z  " << z << endl;
	cout << "------------------------------------------------" << endl;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;
	cout << "tub = " << tub << endl;
	cout << "a million tubs  = " << million << endl;

	cout << "a million tubs * 10  = " << million * 10 * million << endl;
	cout << "mint = " << mint << endl;
	cout << "million * mint = " << million * mint << endl;


	return 0;
}

int main39()
{
	cout << 7 / 3 << endl;

	cout << 7.7 / 7 << endl;
	cout << 7.7f / 7 << endl;


	/*
	求模运算
	*/
	cout << 7 % 3 << endl;

	using namespace std;
	int auks, bats, coots;
	// the following statement adds the values as double
	// then converts the result to int
	auks = 19.99 + 19.99;

	/*类型转换
	*
	*/

	return 0;
}