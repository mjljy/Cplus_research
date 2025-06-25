#include <iostream>
using namespace std;

int main483() 
{
	char flower[10] = "rose";
	cout << flower << "s is red\n ";
	cout << "------------------------------------------------------" << endl;

	char animal[20] = "bear";
	const char * bird = "wren";
	//char * bird1 = "wren";  Error
	cout << "bird==" << *bird << endl;
	cout << "animal[0]==" << *animal << endl;
	
	cout << animal << " and ";
	cout << bird << "\n";
	cout << "-----------------------------" << endl;
	//char * ps = animal; //初始化和复制

	cin >> animal;
	char* ps; // 初始化
	ps = animal; //赋值

	cout << "ps 指针 =" << ps << "at   (int*)ps  =   " << (int*)ps << endl;
	cout << "*ps 指针 =" << *ps << endl;
	cout << "animal   =" << animal << endl;


	cout << "before using strcpy()\n";
	cout << animal << " animal    at " << (int*)animal << endl;
	cout << ps << "   ps   at " << (int*)ps << endl;
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "after using strcpy()\n";
	//cout << ps << "at " << (int*)ps << endl; // int看作一个强制类型转换符  int*看作一个int型指针的强制类型转换
	cout << animal << " animal    at " << (int*)animal << endl;
	cout << ps << "   ps   at " << (int*)ps << endl;

	delete [] ps;
	/*
	(int)、(int&)和(int*)的区别
	https://www.cnblogs.com/alephsoul-alephsoul/archive/2012/10/10/2719192.html
	*/

	return 0;


}