#include <iostream>
#include <string>
using namespace std;
int main431()
{
	cout << "-------------------------------------------------------" << endl;

	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panter";

	cout << "Enter a king of feline:";
	cin >> charr1;
	cout << "Enter another  king of feline:";
	cin >> str1;
	cout << "Here are some of felines:\n";


	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
	cout << "the third letter in " << charr2 << " is  " << charr2[2] << endl;

	cout << "the third letter in " << str2 << " is  " << str2[2] << endl;

	cout << "-------------------------------------------------------" << endl;

	string s1 = "xxxxxxx1";
	string s2 = "xxxxxxx2";
	string s3 = "xxxxxxx3";
	cout << "s1 =  " << s1 << endl;
	cout << "s2 =  " << s2 << endl;
	cout << "s3 =  " << s3 << endl;
	cout << "-----------------" << endl;

	s2 = s1;
	cout << "s2 = s1 = " << s2 << " = "<< s1 << endl;
	s3 = s1 + s2;
	cout << "s3 = s1 + s2  = " << s3 <<   endl;
	s1 += s2;
	cout << "s1 += s2 =  " << s1 << endl;
	s2 += "wwwww";
	cout << "s2 +=  \"wwwww\" =  " << s2 << endl;
	cout << "-------------------------------------------------------" << endl;
	return 0;
}