#include <iostream>
using namespace std;
int main740() {
	/*
	先看下 二维指针的使用
	*/

	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//int a[3] = {1,2,3};
	int ii;
	for (int i = 0; i < 3; i++)
	{
		ii = 0;
		cout << "i=" << i << endl;
		for (ii; ii<3;ii++)
		{
			cout << "ii=" << ii << endl;
			cout << "a[i][ii]=" << a[i][ii] << endl;
			cout << "-------" << endl;
		}
	}

	char aa[20] = "okkkkkk";
	cout << "aa" << aa << endl;

	char aa1[3][20] = { "xxx","yyyy","zzzxxx" };

	for (int i = 0; i < 3; i++)
	{ 
		cout << "i=" << i << endl;
		cout << "aa1[i]=" << aa1[i] << endl;
		cout << "-------"  << endl;
	}







	return 0;
}
