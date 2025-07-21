#include <iostream>
using namespace std;
int main() {

	int rats=101;
	int& dodents = rats;

	int rars1 = rats;

	cout << "rats     =" << rats << endl;
	cout << "dodents  =" << dodents << endl;
	cout << "rars1    =" << rars1 << endl;

	cout << "rats     =" << &rats << endl;
	cout << "dodents  =" << &dodents << endl;
	cout << "rars1    =" << &rars1 << endl;
	
	cout << "-----------------------------------------------" << endl;

	rars1 = 222;

	cout << "rats     =" << rats << endl;
	cout << "dodents  =" << dodents << endl;
	cout << "rars1    =" << rars1 << endl;

	cout << "rats     =" << &rats << endl;
	cout << "dodents  =" << &dodents << endl;
	cout << "rars1    =" << &rars1 << endl;
	cout << "-----------------------------------------------" << endl;

	rats++;

	cout << "rats     =" << rats << endl;
	cout << "dodents  =" << dodents << endl;
	cout << "rars1    =" << rars1 << endl;

	cout << "rats     =" << &rats << endl;
	cout << "dodents  =" << &dodents << endl;
	cout << "rars1    =" << &rars1 << endl;

	cout << "-----------------------------------------------" << endl;


	int business = 50;
	dodents = business;

	cout << "business     =" << business << endl;
	cout << "business     =" << &business << endl;
	cout << "---------" << endl;
	cout << "rats     =" << rats << endl;
	cout << "dodents  =" << dodents << endl;
	cout << "rars1    =" << rars1 << endl;

	cout << "rats     =" << &rats << endl;
	cout << "dodents  =" << &dodents << endl;
	cout << "rars1    =" << &rars1 << endl;

	cout << "-----------------------------------------------" << endl;
	dodents = business;

	cout << "business     =" << business << endl;
	cout << "business     =" << &business << endl;
	cout << "---------" << endl;
	cout << "rats     =" << rats << endl;
	cout << "dodents  =" << dodents << endl;
	cout << "rars1    =" << rars1 << endl;

	cout << "rats     =" << &rats << endl;
	cout << "dodents  =" << &dodents << endl;
	cout << "rars1    =" << &rars1 << endl;


	return 0;

}