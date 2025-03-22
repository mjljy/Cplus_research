#include <iostream>
#include <limits>
using namespace std;


//  char 整型
int main_3_2()
{
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "ADD one to the character  code  " << endl;

	ch = ch + 1;
	i = ch;
	
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout.put(ch);
	cout.put('\n');


	cout.put('l');

	cout.put('\n');
	bool is_ready = true;

	cout << "is_ready " << is_ready  << endl;


	return 0;



		 

}