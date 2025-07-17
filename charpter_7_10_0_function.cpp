#include <iostream>
using namespace std;
double calc1(int);
double calc2(int);
int    calc3(double x);
void estimate(int ,double(*pf)(int));
void estimate1(int(*pf)(double));

int main7100() {

	int y = 10000;

	estimate(y, calc1);
	estimate(y, calc2);
	estimate1(calc3);

	return 0;

}

void estimate(int y,  double(*pf)(int))
{
    double p = 0;
	//p = (*pf)(y);
	p = pf(y);
	cout << "p=" <<p  <<endl;
}

void estimate1(int (*pf)(double))
{
	double p = 1.345;
	//p = (*pf)(y);
	p = pf(p);
	cout << "p=" << p << endl;
}


double calc1(int x)
{
	return  x * 0.05;
}
double calc2(int x)
{
	return  x * 0.01;
}
int calc3(double x)
{
	return  int (x * 100);
}