#include <iostream>
using namespace std;

char* return_char_point(char[]);
char* build_str(char , int );
const char* return_char_point1();
const char* return_char_point2();

int main751() {
	/*返回一个字符串地址*/



	char w[20] = "lululu";
	char* pt1 = return_char_point(w);
	cout << "pt1=" << pt1 << endl;
	//cout << "pt1=" << *pt1 << endl;
	cout << "----------------------" << endl;
	char c = 'V';
	int z = 20;
	pt1 = build_str(c,z);
	cout << "pt1=" << pt1 << endl;
	//cout << "pt1=" << *pt1 << endl;

	const char* pt2 = return_char_point1();
	cout << "pt2=" << pt2 << endl;
	cout << "----------------------" << endl;


	const char* pt3 = return_char_point1();
	cout << "pt3=" << pt3 << endl;

	return 0;
}

char* return_char_point(char x[])
{
	// 返回的指针所指向的数据不能够是函数内声明的变量   这个是函数外部的
	char* pt = x;
	return pt;
}

const char* return_char_point1()
{
	const char* pt = "return_char_point1";
	return pt;
}


const char* return_char_point2()
{
	char x[20] = "return_char_point1";
	// 函数内部  必须用const 声明才可以返回
	char * pt = x;
	return pt;
}

char* build_str(char c, int n)
{
    char* pstr = new char[n + 1];

	pstr[n] ='\0';
	while (n-- > 0)
	{
		pstr[n] = c;
	}
	return pstr;






}