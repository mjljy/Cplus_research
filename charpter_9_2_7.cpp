#include<iostream>
#include"charpter_9_2_7_10_head.h"
//#include"charpter_9_2_7_12_head.h"

extern const int charpter_9_2_7_2 =10;
int charpter_9_2_7_1 = 10;

using namespace  std;


void charpter_92_7_1();


int main927() {
	charpter_9_2_7_1 = charpter_9_2_7_1 + 10;
	cout << "charpter_9_2_7.cpp   charpter_9_2_7 " << &charpter_9_2_7 << endl;
	cout << "charpter_9_2_7.cpp   charpter_9_2_7 " << charpter_9_2_7 << endl;
	cout << "---------------------" << endl;
	charpter_92_7_1();
	cout << "---------------------" << endl;
	cout << "charpter_9_2_7.cpp   charpter_9_2_7_1 " << charpter_9_2_7_1 << endl;
	cout << "charpter_9_2_7.cpp   charpter_9_2_7_1 " << &charpter_9_2_7_1 << endl;
	cout << "---------------------" << endl;

	cout << "charpter_9_2_7.cpp   charpter_9_2_7_2 " << charpter_9_2_7_2 << endl;
	cout << "charpter_9_2_7.cpp   charpter_9_2_7_2 " << &charpter_9_2_7_2 << endl;

	return 0;
}