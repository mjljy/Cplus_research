#include <iostream>
using namespace std;

char* return_char_point(char[]);
char* build_str(char , int );


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
	return 0;
}

char* return_char_point(char x[])
{
	char* pt = x;
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