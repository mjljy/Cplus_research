#include <iostream>
using namespace std;
/*
指针使用的再熟悉  
书里面罗列了比较多的new创建动态数据类型
这里展示下非动态数据类型
书里面比较多介绍 字符数组 这里介绍费字符数组

*/
struct travel_time1 {
	int hours;
	int times;
};


int main479() {

char x1[40] = "char shuzu";
int  x2[5] = {1,2,3,4,5};

cout << "x1="<< x1 << endl;
cout << "x2=" << x2 << endl; //int 型的数组打印出来的就是地址了  第一个元素的地址
cout << "x2=" << *x2 << endl; //int 型的数组打印出来的就是地址了  第一个元素的地址  *地址=数值

char * p1;
int * p2;

p1 = x1;
p2 = x2;

cout << "p1=" << p1 << endl;
cout << "p2=" << p2 << endl; //int 型的数组打印出来的就是地址了  第一个元素的地址
cout << "p2=" << *p2 << endl; //int 型的数组打印出来的就是地址了  第一个元素的地址  *地址=数值


// 把指针当做数组名来用 使用下标 没问题

cout << "p2[0]=" << p2[0] << endl;
cout << "p2[1]=" << p2[1] << endl;
cout << "p2[2]=" << p2[2] << endl;

// new的指针  可以把别的值赋值过来吗 可以  但是地址就变了  new然后之后 也没有delete 会造成内存溢出

travel_time1 t1 = { 5,30 };
travel_time1 t2 = { 3,20 };

travel_time1 * pt1 = new travel_time1;
cout << "pt1 addres = " << pt1 << endl;
cout << "t1 addres = " << &t1 << endl;
cout << "t2 addres = " << &t2 << endl;
delete pt1;

pt1 = &t1;
cout << "pt1 addres = " << pt1 << endl;
cout << "pt1.hours" << (*pt1).hours << endl;
cout << "pt1.times" << (*pt1).times << endl;

pt1 = &t2;
cout << "pt1 addres = " << pt1 << endl;
cout << "pt1.hours" << (*pt1).hours << endl;
cout << "pt1.times" << (*pt1).times << endl;






return 0;


}