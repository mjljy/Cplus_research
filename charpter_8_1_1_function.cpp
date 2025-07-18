#include <iostream>
using namespace std;
inline double square(double x) { return  x * x; };

int main() {

	double x = 2.2;
	cout << "square = " << square(x) << endl;

	return 0;

}