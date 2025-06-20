#include <iostream>
#include <conio.h>
using namespace std;
int main422()
//int main()
{
	cout << "---------------"<< endl;

	//int year;
	////cin >> year;
	//year = _getch();

	//cout << "year = " << year  <<  endl;


	int ch;

	_cputs("Type 'Y' when finished typing keys: ");
	do
	{
		ch = _getch();
		ch = toupper(ch);
	} while (ch != 'Y');

	_putch(ch);
	_putch('\r');    // Carriage return
	_putch('\n');    // Line feed


	cout << "ch = " << ch  <<  endl;
	return 0;
}