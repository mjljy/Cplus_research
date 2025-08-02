#include <iostream>
#include <limits>
using namespace std;


//  char 整型
int main32()
{
	char ch = 'M';
	int i = ch;
	
	/*
	int i = 10;
	char i = 'x';
	严重性	代码	说明	项目	文件	行	禁止显示状态	详细信息
	错误	C2371	“i”: 重定义；不同的基类型	Cplus_research	E:\Github_person\Cplus_research\charpter_3_2_char.cpp	11		

	*/
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "ADD one to the character  code  " << endl;

	ch = ch + 1;
	i = ch;
	
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout.put(ch);
	cout.put('\n');


	cout.put('l');

	cout.put('\n');
	bool is_ready = true;

	cout << "is_ready " << is_ready  << endl;


	return 0;



		 

}