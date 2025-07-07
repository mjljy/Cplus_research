#include <iostream>
using namespace std;
unsigned int c_in_str(const char*, char);

int main() {



	char mmm[20] = "mnimum";

	const char *wail = "ululutttt"; //  常量的指针传递声明 必须使用const修饰

	unsigned int w = 0;

	w = c_in_str(mmm, 'm');
	cout << "w=" << w << endl;

	w = c_in_str(wail, 'u');
	cout << "w=" << w << endl;

	return 0;

}


/* 
计算特定字符在字符串中出现的个数
次数是正的  使用unsigned int

*/

unsigned int c_in_str(const char * x, char ch)
{
	int nums = 0;
	while (*x)
	{
		if (*x == ch)
		{
			nums++;
		}
		x++;
	}
	return nums;
}
