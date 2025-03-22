#include <iostream>
using namespace std;


//  char 整型
int main_3_3()
{
	cout.setf( ios_base::fixed, ios_base::floatfield ); //  fixed-point

	float tub = 10.0 / 3.0; //  good to about 6 places
	double mint = 10.0 / 3.0; //  good to about 6 places
	const float million = 1.0e6;

	cout << "tub = " << tub << "\n";

	//  通常 cout 会删除末尾的0   cout.setf 将覆盖这种行为 至少是在新的实现中是这样的  

	cout << "a million tubs  = "<< million * tub << endl;
	cout << "a  ten million tubs  = "<< 10 * million * tub << endl;

	cout << "mint = " << mint << endl;
	cout << " a million mints = " << million * mint << endl;



    /*
	
	tub = 3.333333   6位有效位
	a million tubs  = 3333333.250000   乘以100 00000万  放大 10的6次方 第7位出现了误差
	a  ten million tubs  = 33333332.000
	mint = 3.333333
	a million mints = 3333333.333333

	*/
	float  a = 2.34E+22f;
	float  b = a + 1.0f;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//  a  是一个 小数点左边有23位的数字  精度在 6或者7位  在第32位加上 1  不会对这个值 有任何影响



	return 0;





}
