#include<iostream>
using namespace std;

// ��û���Լ�д�Ĺ��캯��
class Demo1 {
	// ������˽�е�����£������ǲ���ֱ�ӷ��ʵģ�ֻ��ͨ�����к��������ʣ��⵱Ȼ���൱�鷳��
	int x1;
	int y1;
	public:
		void fuc1(int x, int y) { x1 = x; y1 = y; };
		void fuc2() { cout << "Demo1 fuc2 x1=" << x1  << " y1=" << y1 << endl;}};

class Demo2 {
	// �����ǹ��е�����£�����ͨ��{}��ֱ�ӳ�ʼ����������Υ����C++��� �������ص�����
	public:
		int x1;
		int y1;
	public:
		void fuc1(int x, int y) { x1 = x; y1 = y; };
		void fuc2() { cout << "Demo2 fuc2 x1=" << x1 << " y1=" << y1 << endl; }};

// �Լ�дһ����ͨ��public�������䵱��ʼ��������������
class Demo3 {
	// ������˽�е�����£������ǲ���ֱ�ӷ��ʵģ�ֻ��ͨ�����к��������ʣ��⵱Ȼ���൱�鷳��
	int x1;
	int y1;
public:
	void init(int x, int y) { x1 = x; y1 = y; };
	void fuc2() { cout << "Demo3 fuc2 x1=" << x1 << " y1=" << y1 << endl; }
};


int main() {
	Demo1 demo1;
	demo1.fuc1(10,20);
	demo1.fuc2();
	//
	Demo2 demo2 = Demo2{ 10,20 }; // Demo2 demo2 = { 10,20 };
	demo2.fuc2();
	//
	Demo3 demo3;
	demo3.init(10,20);
	demo3.fuc2();





}