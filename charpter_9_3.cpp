#include<iostream>
using namespace std;

namespace Jack {
	double pail;
	void fetch();
	int pal;
	struct Well {};
}

namespace Jill {
	double bucket(double n); // functioon definition 
	//double bucket(double n) {}; // functioon definition 
	double fetch;
	int pal;
	struct Hill {};
}
namespace Jack {
	char * goose(const char*);  // functioon definition 

}
namespace Jack {
	
	void fetch() {
	
	}
}
double pail = 9.99;

int main() {

	Jack::pail = 2.4;
	Jill::Hill mole;
	Jack::fetch();
	//double pail;
	using Jack::pail;

	pail = 10;

	cout <<"pail=" << pail<<endl;
	cout << "Jack::pail=" << Jack::pail << endl;

	return 0;



}