#include<iostream>
using namespace std;

// 都没有自己写的构造函数
class Demo1 {
	// 数据是私有的情况下，程序是不能直接访问的，只能通过公有函数来访问，这当然是相当麻烦的
	int x1;
	int y1;
	public:
		void fuc1(int x, int y) { x1 = x; y1 = y; };
		void fuc2() { cout << "Demo1 fuc2 x1=" << x1  << " y1=" << y1 << endl;}};

class Demo2 {
	// 数据是公有的情况下，可以通过{}来直接初始化，但是这违背了C++类的 数据隐藏的特性
	public:
		int x1;
		int y1;
		int w1;
	public:
		void fuc1(int x, int y) { x1 = x; y1 = y; };
		void fuc2() { cout << "Demo2 fuc2 x1=" << x1 << " y1=" << y1 << endl; }};

// 自己写一个普通的public函数来充当初始化函数，可以吗？
class Demo3 {
	// 数据是私有的情况下，程序是不能直接访问的，只能通过公有函数来访问，这当然是相当麻烦的
	int x1;
	int y1;
public:
	void init(int x, int y) { x1 = x; y1 = y; };
	void fuc2() { cout << "Demo3 fuc2 x1=" << x1 << " y1=" << y1 << endl; }
};


int main1030() {
	//Demo1 demo1;
	//demo1.fuc1(10,20);
	//demo1.fuc2();
	//
	//Demo2 demo2 = Demo2{ 10,20 };    // OK
	 Demo2 demo2{ 10,20 };             // OK
	//Demo2 demo2 = Demo2(10,20);      // Error “<function-style-cast>”: 无法从“initializer list”转换为“Demo2”
	//Demo2 demo2(10, 20);             // Error “<function-style-cast>”: 无法从“initializer list”转换为“Demo2”
	demo2.fuc2();
	////
	//Demo3 demo3;
	//demo3.init(10,20);
	//demo3.fuc2();




	return 0;
}