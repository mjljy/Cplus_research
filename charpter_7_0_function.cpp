#include<iostream>
using namespace  std;
int w(const char[]);
int w1(const char *);
const double* f1();
const double* f2();
int main70() {
	/*
	函数参数传递
	1. char 数组 ""   原型给数组和指针都是完全一样的吗？等效的
	2. 字符串常量  字符串字面值   不行了  原型必须const入参  字符串字面值是常量
	3. 
	*/

	char x[20] = "flag1";
	int y;
	y = w(x);
	cout << "y" << y << endl;
	y = w("flag2");
	cout << "y" << y << endl;
	cout << "------------------" << endl;
	y = w1(x);
	cout << "y" << y << endl;
	y = w1("flag2");
	cout << "y" << y << endl;
	cout << "------------------" << endl;

	const double  * p ;
	/*
	“初始化”: 无法从“double”转换为“const double *”
	*/
	p = f1();
	cout << "f1  p=" << p << endl;

	cout << "f1  p=" << *p << endl;

	auto f2 = f1;
	const double* p1;
	p1 = f2();
	cout << "p1=" << *p1 << endl;


	auto f3 = f1;
	const double* p2;
	p2 = f3();
	cout << "p1=" << *p1 << endl;

	return 0;
}

int  w(const char x[]) {
	cout << "x=" << x << endl;
	return 10;
}

int  w1(const char * x) {
	cout << "x=" << x << endl;
	return 10;
}

//  const double * f1 ( const double ar[], int n)

const double * f1() // 值是不能改的
{
	const double * p = new  double(0.2);
	//*p = 0.5;
	cout << "f   -------  p=" << *p << endl;
	cout << "f   -------  p=" << p << endl;
	return p;
}
