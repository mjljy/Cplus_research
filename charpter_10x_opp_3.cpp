// 构造函数
// 析构函数
#include <iostream>
using namespace std;

class Opp_test_2
{

private:

	int a;
	int seta(int in1);

public:
	int b;
	int setb(int in1);
	Opp_test_2(int in1, int in2);
	~Opp_test_2();
	void out_put()
	{
		cout << "a = " << a << "   b = " << b << endl;
	}
};
int Opp_test_2::setb(int x)
{
	b = x; return 0;
};
int Opp_test_2::seta(int x)
{
	a = x; return 0;
};

Opp_test_2::Opp_test_2(int in1,int in2)
{a = in1;b = in2;}

Opp_test_2::~Opp_test_2()
{
	cout << "Opp_test_2 here" << endl;;
}

int main1030()
{
	Opp_test_2 shili(1, 2);
	shili.out_put();

	//cin.get();s
	return 0;


}