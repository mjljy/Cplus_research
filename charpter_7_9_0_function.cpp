#include <iostream>
using namespace std;

int call_self(int);
void countdown(int n);
void demo7901();
void demo7902();
void demo7903();
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);

int main790() {

	//demo7901();
	//demo7902();
	demo7903();


	return 0;
}

void demo7902() {

	countdown(4);
}
void demo7903() {
	// Len = 66;
	// Divs = 6;
	char ruler[Len];
	int i;
	for (i = 1; i < Len - 2; i++)
		ruler[i] = ' ';
	std::cout << "tag=  strlen() = " << strlen(ruler) << endl;
	std::cout << "tag=  ruler[0]  = " << ruler[0] << endl;
	std::cout << "tag=  ruler[1]  = " << ruler[1] << endl;
	std::cout << "tag=  ruler[2]  = " << ruler[2] << endl;
	std::cout << "tag=  ruler[63]  = " << ruler[63] << endl;
	std::cout << "tag=  ruler[65]  = " << ruler[64] << endl;
	//std::cout << "tag=  ruler[66]  = " << ruler[66] << endl;


	ruler[Len - 1] = '\0';
	std::cout << "tag=  ruler[65]  = " << ruler[Len - 1] << endl;
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	std::cout << "---------- tag 0--------------- " << std::endl;
	std::cout << ruler << std::endl;
	std::cout << "---------- tag 1--------------- " << std::endl;
	for (i = 1; i <= Divs; i++)
	{
		// level 加大  平均的次数加多   密度越密
		std::cout << "---------- i--------------- " << i <<std::endl;
		subdivide(ruler, min, max, i);
		std::cout << "---------- tag 2--------------- " << std::endl;
		std::cout << ruler << std::endl;
		std::cout << "---------- tag 3--------------- " << std::endl;
		for (int j = 1; j < Len - 2; j++)
			ruler[j] = ' ';  // reset to blank ruler
	}
	// std::cin.get();

}

void demo7901() {

	int x = 0;
	int y = 0;
	y = call_self(x);
	cout << "y=" << y << endl;
	x = 11;
	y = call_self(x);
	cout << "y=" << y << endl;
	x = 100;
	y = call_self(x);
	cout << "y=" << y << endl;
	x = 5;
	y = call_self(x);
	cout << "y=" << y << endl;


}

int call_self(int x) {
	cout << "x=" << x << endl;
	if ( x < 10)
	{
		x = call_self(x+1);
	}
	else { return x; }
return x;

}
void countdown(int n)
{
	using namespace std;
	cout << "Counting down ... " << n << endl;
	if (n > 0)
		countdown(n - 1);     // function calls itself
	cout << n << ": Kaboom!\n";
}
void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;
	int mid = (high + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
}
