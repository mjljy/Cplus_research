#include <iostream>
using namespace std;

int main2_3(int x, int y) {
	return x + y;
}
int main2_1(void) {
	printf("Hellow World!\n");
	return 0;
}

int main()
{
	int a = 3;
	int b = 4;
	int c;
	cout << " come up and C++ ";
	cout << endl;
	cout << " you wont`t regret it! " << endl; ;
	main2_1();
	c = main2_3(a, b);
	cout << " fun:main_2_3  x= " << a << " y=" << c << " 结果=" << c;
	cin.get();
	// 运行完后窗口回自动关闭 可以用  第四章介绍cin.get() 保持窗口一直打开 直到您按任何键
	// ctrl+F5  运行  不会关闭cmd窗口
	return 0;

}


