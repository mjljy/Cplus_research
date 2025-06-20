#include <fstream>
using namespace std;



int main17()

{
	/*
	ofstream是从内存到硬盘，ifstream是从硬盘到内存，其实所谓的流缓冲就是内存空间
	
	在fstream类中，有一个成员函数open()，就是用来打开文件的，其原型是：

	特别提出的是，fstream 有两个子类：

	ifstream(input file stream) 和 ofstream(outpu file stream)

	ifstream默认以输入方式打开文件

	ofstream默认以输出方式打开文件
	
	https://blog.csdn.net/sinat_36219858/article/details/80369255

	数组名 是当作指针用的, 在函数头的声明中   char []  和  * char []  是等效的


	
	*/

	const char* INIFile = "config.ini";

	ifstream inifile(INIFile);







	return 0;

}