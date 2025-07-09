#include <iostream>
#include <string>
using namespace std;
string show_string(string );
const int SIZE = 5;
void display(const string sa[], int n);


int main770() {



	string x = "xxxxxxxxxxxxxx";
	string y;
	y = show_string(x);
	cout <<"y=" << y<<endl;

	cout << "-----------------------------" << endl;
	string list[SIZE];     // an array holding 5 string object
	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}

	cout << "Your list:\n";
	display(list, SIZE);




	return  0;
}
string show_string(string x)
{
	string y;
	y = x;
	return y;

}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << sa[i] << endl;
}
