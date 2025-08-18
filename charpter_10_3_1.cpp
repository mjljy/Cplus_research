#include<iostream>
using namespace std;

//有构造函数的情况
class Demo4 {
	// 数据是私有的情况下，程序是不能直接访问的，只能通过公有函数来访问，这当然是相当麻烦的
int x1;
int y1;
public:
	void init(int x, int y) { x1 = x; y1 = y; };
	void fuc2() { cout << "Demo4 fuc2 x1=" << x1 << " y1=" << y1 << endl; }
	Demo4(int x_x, int y_y) { x1 = x_x; y1 = y_y; cout << "Demo4 constructor  definition  run " << endl; }
	Demo4() { }
};


int main() {

	// Demo2 demo2 = Demo2{ 10,20 }; // Demo2 demo2 = { 10,20 }; 隐式的调用默认构造函数的时候 不要使用圆括号  要使用 大括号

	// 显式的调用构造函数

	Demo4 demo41;
	Demo4 demo4 = Demo4(10,20);
	//demo4.fuc2();
	//Demo4 demo41(100, 200);
	//demo41.fuc2();
	//demo41.Demo4(101,201);

	//Demo4 *demo42 = new Demo4(101, 202);
	//*demo42->fuc2();

	//Demo4 demo42;

	return 0;
}