#include <iostream>
using namespace std;
int main421()
{
cout << "------------------------------------------------------int  newline   " << endl;
int a;
while (1)
{
	cin >> a;
	if (!cin)
	{
		cout << "input error please retry: " << endl;
		cin.clear();
		//cin.sync();
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������һ���ַ�
	}
	else {
		cout << "res ; "<<  a;
		//break;
	}}
return 0;
}