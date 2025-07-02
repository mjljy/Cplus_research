#include <iostream>
using namespace std;

int main478()
//int main()
{

	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short  stacks[3] = { 3,2,1 };
	short  stacks1[3] = { 7,8,9 };
	cout << "& wages = " << &wages << endl;
	cout << "wages = " << wages << endl;
	// 获取地址

	double* pw = wages; // 获取数组的地址  就是数组第一个元素的地址
	
	short* ps = &stacks[0]; // 获取数组第一个元素的地址

	// wages = &wages[0] = address of first element of array



	cout << " stacks address stacks1 +1 = " << (stacks1+1) << endl;
	cout << " stacks address stacks1 = " << stacks1 << endl;
	cout << " stacks address stacks1[0] = " << stacks1[0] << endl;
	cout << " stacks address stacks1[1] = " << stacks1[1] << endl;

	cout << " wages address  pw = " << pw << endl;
	cout << " wages address  pw = " << *pw << endl; // * 会获得数组第一个元素的值
	cout << " wages address  wages = " << *wages << endl; // * 会获得数组第一个元素的值
	
	
	cout << " wages address  pw = " << pw << endl;
	cout << " wages address  pw = " << *pw << endl; // * 会获得数组第二个元素的值  地址数值加了4 double  4个内存地址

	cout << "---------------------------------------" << endl;

	cout << " wages address  pw[0] = " << pw[0] << endl;
	cout << " wages address  pw[1] = " << pw[1] << endl;

	cout << "---------------------------------------" << endl;



	cout << " stacks address  ps = " << ps << endl;
	cout << " stacks address  *ps = " << *ps << endl; // * 会获得数组第一个元素的值
	ps = ps + 1;
	cout << " stacks address  ps = " << ps << endl;
	cout << " stacks address  *ps = " << *ps << endl; // * 会获得数组第一个元素的值  地址数值加了2  short 2个内存地址

	/*  
	double* pw1= &wages; // 获取数组的地址  就是数组第一个元素的地址
	cout << " stacks address  pw1 = " << pw1 << endl;
	因为 数组名已经代表了数组的指针了  那么对数组名使用 &提取地址的运算 会是什么结果呢
	会报错
	严重性	代码	说明	项目	项目级别	路径	文件	行	列	类别	源	禁止显示状态	工具	详细信息	上下文
	错误	C2440	“初始化”: 无法从“double (*)[3]”转换为“double *”	Cplus_research	1	D:\MJLJY\Github\Cplus_research	D:\MJLJY\Github\Cplus_research\charpter_4_7_8_pointer.cpp	13	13		生成		CL.exe
	值 可以打印 但是不能赋值 类型不匹配

	*/

	cout << " stacks [0] = " << stacks[0] << endl;
	cout << " stacks [1] = " << stacks[1] << endl;
	cout << " stacks = " << stacks << endl;  // 数组名的值是地址
	cout << " stacks+1 = " << (stacks+1) << endl; // 地址的值  变成了 第二个元素的地址

	cout << " size if (wages)  = " << sizeof(wages) << endl;

	cout << " size if (pw)  = " << sizeof(pw) << endl;
	cout << " size if (double)  = " << sizeof(double) << endl;


	cout << " size if (short)  = " << sizeof(short) << endl;




	cout << " stacks address stacks1 = " << stacks1 << endl;
	cout << " stacks address stacks1[0] = " << stacks1[0] << endl;
	cout << " stacks address stacks1[1] = " << stacks1[1] << endl;

	//short 
	 
	
	//stacks1 = stacks1 + 1;

	/*严重性	代码	说明	项目	项目级别	路径	文件	行	列	类别	源	禁止显示状态	工具	详细信息	上下文
	错误	C3863	不可指定数组类型“short [3]”
	Cplus_research	1	D:\MJLJY\Github\Cplus_research	D:\MJLJY\Github\Cplus_research\charpter_4_7_8_pointer.cpp	23	10		生成		CL.exe

	数组类型是不支持数组运算赋值操作的

*/

	short tell[10];

	cout << "使用地址运算符 &tell = " << &tell << endl;
	cout << "使用数组的名字 tell = " << tell << endl;
	// 获取地址

	cout << "使用地址运算符 &tell+1 = " << &tell + 1 << endl;
	cout << "使用数组的名字 tell+1 = " << tell + 1 << endl;


	//short (*p)[20] = &tell;

	return 0;

}