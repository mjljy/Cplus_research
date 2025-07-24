#include <iostream>
using namespace std;
int main821() {

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

	cout << "-----------------------------------------------" << endl;

	int pots = 101;
	int* pt = &pots;
	cout << "pots     =" << &pots << endl;
	cout << "pots     =" << pots << endl;
	cout << "pt       =" << pt << endl;
	cout << "*pt      =" << *pt << endl;
	cout << "business     =" << &business << endl;
	cout << "business     =" << business << endl;
	
	int& rodentss = *pt; // 地址的引用
	cout << "*rodentss      =" << rodentss << endl;
	cout << "&rodentss      =" << &rodentss << endl;
	pt = &business;
	cout << "*rodentss      =" << rodentss << endl;
	cout << "&rodentss      =" << &rodentss << endl;
	cout << "pt       =" << pt << endl;
	cout << "*pt      =" << *pt << endl;



	return 0;

}