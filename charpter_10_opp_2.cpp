#include <iostream>
using namespace std;


class Opp_test
{

private:

	int a;
	int seta(int in1);
	int fuc(int in1, int in2);

public:
	int b;
	int setb(int in1);
	int fuc1(int in1, int in2);
	int fuc3(int in2, int in1)
	{
		return 100;
	}
};

int Opp_test::setb(int x)
{
	b = x; return 0;
};
int Opp_test::seta(int x)
{
	a = x;return 0;
};
int Opp_test::fuc( int x, int y)
	{
		return x + y;
	};
int Opp_test::fuc1(int x, int y)
{
	cout << "Opp_test b >>> " << b;
	return x * y;
};

int main1020()
{
	Opp_test d;
	int c;
	//d.setb(100);
	c = d.fuc1(3, 4);
	cout << "Opp_test fuc1 >>> " << c ;
	cin.get();
	return 0;
}