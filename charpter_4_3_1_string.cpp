#include <iostream>
#include <string>
using namespace std;

int main431()
{
	/*
	strcpy(charr1,  charr2); // copy charr2  to charr1;
	strcat(charr1,  charr2); //append contents of charr2 to charr1

	size() string类型的长度
	strlen()   string类型的长度

	
	C++中length()函数只能用来获取字符串长度
	C++中size()函数除了跟length()函数一样可以获取字符串长度之外，还可以获取vector类型的长度

	sizeof() 用于获取对象所占内存空间大小
	
	strlen 是一个用于计算字符串长度的函数，其原型通常定义在 <cstring> 头文件中
	使用 strlen 时要确保输入的字符串是以 null 结尾的，否则可能导致未定义的行为
	字符串数组使用
	strlen():返回字符数组或字符串所占的字节数
	strlen(str)是用于求字符数组的长度，其参数是char*



	c++中的size()和length()没有区别
	length()是因为沿用C语言的习惯而保留下来的
	string类最初只有length()





	*/

	char charr1[20];
	char charr2[20]= "jajuar";

	string str1;
	string str2 = "panther";

	str1 = str2;

	strcpy(charr1, charr2);

	str1 += " paste";

	strcat(charr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);
	int len3 = str2.size();
	int len4 = strlen(charr2);

	cout << " the string str1=" << str1 << " contains " << len1 << " characters.\n";

	cout << " the string charr1=" <<  charr1 << " contains " << len1 << " characters.\n";

	cout << " the string str2=" << str2 << " contains " << str2 << " characters.\n";

	cout << " the string charr2=" << charr2 << " contains " << len4 << " characters.\n";


	cout << "--strlen ----- .size()--------length()--------------sizeof()--------------------"<< endl;

	cout << " strlen(charr2) =  " << strlen(charr2) << endl;
	//cout << " strlen(str1) =  "   << strlen(str1) << endl;

	cout << " str1.sizeof() =  " << str1.size() << endl;
	//cout << " charr1.sizeof() =  " << charr1.size() << endl;

	cout << " str1.length() =  " << str1.length() << endl;
	//cout << " charr1.length() =  " << charr1.length() << endl;

	wchar_t title[] = L"Chief song";

	cout << R"(Jim "King "  "\n"        instead of endl.)" << endl;

	cout << R"+*("(who would ?)", she .)+*"<<endl;

	return 0;
}