#include <iostream>
using namespace std;

int main() 
{

	char flower[10] = "rose";
	cout << flower << "s is red\n ";
	cout << "------------------------------------------------------" << endl;

	char animal[20] = "bear";
	const char * bird = "wren";
	//char * bird1 = "wren";

	cout << "bird==" << *bird << endl;
	cout << "animal[0]==" << *animal << endl;
	
	//char * ps;

	cout << animal << " and ";
	cout << bird << "\n";

	//cout << "ps ---->"<< ps << "\n";

	cout << "Enter a kinf of animal:";
	cin >> animal;

	char * ps = animal;

	cout << "ps ---->" << ps << "!\n";

	cout << "before using strcpy()\n";

	cout << animal << "at " << (int*)animal << endl;
	
	cout << ps << "at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];

	strcpy(ps, animal);

	cout << "after using strcpy()\n";

	cout << ps << "at " << (int*)ps << endl; // int看作一个强制类型转换符  int*看作一个int型指针的强制类型转换

	delete [] ps;
	/*
	
	(int)、(int&)和(int*)的区别
	https://www.cnblogs.com/alephsoul-alephsoul/archive/2012/10/10/2719192.html
	
	
	*/

	return 0;


}