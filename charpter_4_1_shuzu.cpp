#include <iostream>
using namespace std;

/*
สýื้
*/

int main41()
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
	cout << "things " << things << endl;
	short things1[4] { 1,3,4,8 };
	short things2[] { 1,3,4,8 };
	cout << "things1 " << things1 << endl;



	return 0;
}