#include <iostream>
using namespace  std;


int main485() {

/*https://huaweicloud.csdn.net/6549efaa525bff6100e99518.html
print all arry  elements

*/

	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };

	for (int i = 0; i < 10; i++) {      //ʹ�����������±�������� 
		cout << "x=" << a[i] << endl;;
	}
	cout << endl;


	for (int i = 0; i < 10; i++) {       // ʹ����������ָ������������� 
		cout << "x=" << *(a + i) << endl;;
	}
	cout << endl;


	for (int* p = a; p < (a + 10); p++) {    // ʹ��ָ������������ 
		cout << "x" << *p << endl;;
	}
	cout << endl;


	return 0;


}