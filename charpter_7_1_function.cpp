#include<iostream>
using namespace  std;

void simple(); // 函数原型  看做函数的定义说明 一定要有

void demo1();
void demo2();
void cheers(int);
double cube(double x);

void demo1() {
	cout << " main() will call the simple() function:" << endl;
	simple();
	cout << " main() is  finished  wiht the simple " << endl;
}
void demo2() {
	cheers(5);          // function call
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);    // function call
	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " cubic feet.\n";
	cheers(cube(2));    // prototype protection at work
	// cin.get();
	// cin.get();

}

void demo3() { cout << "demo3 here" << endl; }

int main71()
{
	//demo1();
	//demo2();
	demo3();
	return 0;
}

void simple()
{
	// 函数定义 真正的函数表达
	cout << "i am a simple function" << endl;

};

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}

double cube(double x)
{
	return x * x * x;
}
