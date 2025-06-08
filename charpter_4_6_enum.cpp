#include <iostream>
using namespace std;

/*
∏¥∫œ¿‡–Õ
*/

int main()
{
	enum specturm {red, orange, green, blue, vilote};
	cout << "red=  " << red << endl;
	cout << "orange=  " << orange << endl;
	cout << "green=  " << green << endl;
	cout << "------------------------------------"<< endl;
	specturm brand;
	//cout << " brand" << brand << endl;
	brand = blue; 
	cout << "------------------------------------" << endl;

	enum specturm1 { red1=100, orange1=101, green1, blue1=200, vilote1 };
	//specturm1 brand1;
	cout << "red1=  " << red1 << endl;
	cout << "orange1=  " << orange1 << endl;
	cout << "green1=  " << green1 << endl;
	cout << "vilote1=  " << vilote1 << endl;
	cout << "------------------------------------" << endl;




	return 0;
}