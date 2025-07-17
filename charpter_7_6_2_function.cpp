#include <iostream>
#include <cmath>
using namespace std;

struct rect {
	double x;
	double y;
};

struct polar {
	double distance;
	double angle;
};

void show_polar(polar *);
polar * rect_to_polar(rect * );

/*
int sum_arry1(int * , int n);   对于这种声明
前提我们已知  入参是一个int型数组  但是这种声明对已 int型整数 看起来没区别啊  

结论 是的 这两者是通用的

*/

void  sum_arry_special(int*, int);

void  sum_arry_special(int* p, int w)
{
	cout << " ============" << (*p + w) << endl;
}

double* double762();

int main762() {

	//rect rplace;
	//polar  * pplace;

	//rplace.x = 30;
	//rplace.y = 40;
	//pplace = rect_to_polar(&rplace);
	//show_polar(pplace);
	int* num = new int(42);

	int p1 = 10l;
	int w1 = 10l;
	int p2[2] = { 1,2 };

	sum_arry_special(&p1, w1);

	sum_arry_special(p2, w1);

	cout << "----------------------" << endl;

	double * p3;
	p3 = double762();
	cout << "p3=" << p3 << endl;
	cout << "*p3=" << *p3 <<  endl;




	return 0;
}

void show_polar(polar * dapos)
{
	const double a = 57.29577951;
	cout << "distance " << (*dapos).distance << endl;
	cout << "angle " << (*dapos).angle * a << endl;
}
polar * rect_to_polar(rect * xypos) {
	polar* answer = new polar;
	(*answer).distance = sqrt((*xypos).x * (*xypos).x + (*xypos).y * (*xypos).y);
	(*answer).angle = atan2((*xypos).y, (*xypos).x);

	return answer;
}

/*

返回指针 指针类型是 double

声明

double * double762();

*/

double* double762() {
	
	double* p2 = new double;
	*p2 = 0.22L;
	cout << "p2=" << p2 << endl;
	cout << "*p2=" << *p2 << endl;
	return p2;



}