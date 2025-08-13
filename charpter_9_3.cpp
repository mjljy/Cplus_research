#include<iostream>
using namespace std;

namespace Jack {
	double pail;
	void fetch();
	int pal=100;
	struct Well {};
}

namespace Jill {
	double bucket(double n); // functioon definition 
	//double bucket(double n) {}; // functioon definition 
	double fetch;
	int pal=200;
	struct Hill {};
}
namespace Jack {
	char * goose(const char*);  // functioon definition 

}
namespace Jack {
	
	void fetch() {
	
	}
}
//char fetch;
//double pal = 300.001;
//using Jill::pal;

int main93() {

	//Jill::Hill mole;
	//Jack::fetch();

	//using Jack::fetch;
	//double fetch;  Error   如果这局部变量中定义了同名的变量，编译不允许


	//using namespace  Jack;
	//using Jack::pal;
	double pail = 10;
	using namespace  Jill;
	cout <<"pal=" << pal <<endl;
	//cout << "Jack::pal=" << Jack::pal << endl;

	return 0;



}