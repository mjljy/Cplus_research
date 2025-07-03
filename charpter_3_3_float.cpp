#include <iostream>
#include <cfloat>
using namespace std;


//  char 整型
int main33()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //  fixed-point

	/*
	ios_base::fixed作用：
			   设置cout为定点输出格式
	ios_base::floatfield作用：
			   设置输出时按浮点格式，小数点后有6位数字
	https://blog.csdn.net/u011608180/article/details/103484283

	*/
	cout << "第一种 标准小数点形式  支持最多六位小数"  << "\n";
	double std1 = 0.00003;
	double std2 = 0.000000003;
	float  std3 = 0.00003;
	float  std4 = 0.0000000003;
	cout << "std1 = " << std1 << "\n";
	cout << "std2 = " << std2 << "\n";
	cout << "std3 = " << std3 << "\n";
	cout << "std4 = " << std4 << "\n";
	cout << "第二种 E表示形式  支持最多六位有效小数" << "\n";
	double e1 = 3.14E10;
	double e2 = 3.14E+10;
	//float  e3 = 3.14E~10; Error
	float  e4 = 3.14E-10;
	cout << "e1 = " << e1 << "\n";
	cout << "e2 = " << e2 << "\n";
	//cout << "e3 = " << e3 << "\n";
	cout << "e4 = " << e4 << "\n";
	cout << "------------------------------------------------------------------------- " << "\n";


	cout << "DBL_DIG = " << DBL_DIG << "\n";

	cout << "------------------------------------------------------------------------- " << "\n";

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
