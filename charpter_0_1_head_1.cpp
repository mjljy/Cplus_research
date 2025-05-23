/* main.cpp */
#include "charpter_0_head.h"
#include <iostream>
#include "charpter_0_log.h"
#include <stdio.h>
#define PI1 3.1415926; 
#define A   1
#define B   A+3
#define C   A/B*3  // 这里是把所有的define都替换完了, 才开始计算的, 优先级完全按照最后的样子来,和B里面的+ 已经没有关系了   没有类型检查
using namespace std;

int main_0()

{
	// 使用const关键字定义常量
	const double pi = 3.14;

	// 常量赋值之后，不能更改
	//pi = 3.1415926;
    //pi = 4; 不能修改

	FILE* logfile;
	logfile = fopen("syslog.txt", "w");
    //int number1 = 10;
    //int number1 = f1();
    //int number2 = f2(number1);
	////printf("number1 = %d number2 = %d\n", number1, number2);//这是同时输出两个参数，则必须要使用两个控制符，一一对应。
	LOG("打印日志:\n");
	LOG("%d:\n",1);
	LOG("%d:\n", C);
	LOG("%f:\n", pi);
	getchar();
	return 0 ;
}
	

/* end of main.cpp 


/*
	2017年9月10日20:08:04
	printf的简单使用
# include <stdio.h>
int main(void)
{
	//printf("ssss\n");//这里打印ssss，\n是换行。
	int i = 12;
	int a = 47;
	printf("%d\n", i);//这里打印i指向的12的二进制代码，%d代表的是以十进制输出。\n换行。
	printf("%d %d\n", i, a);//这是同时输出两个参数，则必须要使用两个控制符，一一对应。
	//下面输出十六进制的a，输出样式有一下四中方式，最后一种比较好看
	printf("%x\n", a);//输出2f
	printf("%X\n", a);//2F
	printf("%#X\n", a);//2X2F
	printf("%#x\n", a);//2x2f
	printf("i=%d,a=%d\n", i, a);//i=12,a=47 这样输出就更好看了。
	return 0;
}

*/