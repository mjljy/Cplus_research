#include <iostream>
using namespace std;

/*
数组
*/

int main41()
//int main()
{

	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 9;


	cout << "Total yams = " << yams[0]  + yams[1] + yams[2] <<  endl;

	cout << "size of " << sizeof(yams) << endl;
	cout << "size of " << sizeof(yams[0]) << endl;

	cout << "-------------------------------" << endl;

	short things[] = { 1,3,4,8 };
	cout << "直接打印    数组   得到的应该是数组的内存地址    things " << things << endl;
	cout << "things1[0]   =   " << things[0] << endl;
	short things1[4] { 1,3,4,8 };
	short things2[] { 1,3,4,8 };
	cout << "直接打印    数组   得到的应该是数组的内存地址  things1 " << things1 << endl;

	cout << "things1[0]   =   " << things1[0] << endl;

	cout << "-------------------------------" << endl;
	things1[0] = 10;
	things[0] = 11;
	cout << "修改things1[0] = 10  " << things1[0] << endl;
	cout << "修改things[0] = 11  " << things[0] << endl;

	getchar();


	return 0;
}