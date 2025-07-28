#include <iostream>
using namespace std;

void test827(char * );

void Test(const int(&array)[5]);

int main827() {

	// 数组和引用的关联
	// 对于使用传递的值而不做修改的函数
	// 数据对象是数组，那就使用指针，因为这是唯一的选择，并将指针声明为const类型

	char x[10] = "xxxxxx";
	test827(x);

    int  array[5] = { 1,2,3,4,5 };
    Test(array);

	return 0;
}

void test827(char* x)
{
	cout << "x=" << x << endl;
}
void Test(const int(&array)[5])
{
	cout << "size:" << sizeof(array) << endl;
	for (int i = 0; i < sizeof(array) / 4; i++)
	{
		cout << array[i] << " ";
	}
}