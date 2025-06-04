#include <iostream>
#include <string>
using namespace std;

struct struct_x {
	char name[20];
	float volume;
	double price;
};

struct struct_z {
	string name;
	float volume;
	double price;
} struct_x_6, struct_x_7;


struct struct_w {
	string name;
	float volume;
	double price;
} struct_x_8 = {
	"wwww",
	7,
	0.4

}, struct_x_9 = struct_x_8;




int main()
{
	struct struct_y {
		char name[20];
		float volume;
		double price;
	};

	struct_x struct_x_1 = {
		"Glorious Gloria",
		1.88,
		29.99
	}; // Initialized to to the incicated values

	struct_y struct_x_2 = {
		"Glorious Gloria",
		1.88,
		29.99
	};// Initialized to to the incicated values

	cout << "struct_x_1.name=  " << struct_x_1.name <<endl;
	cout << "struct_x_2.price=  " << struct_x_2.price << endl;

	cout << "---------------------------------------------------" << endl;
	struct_y struct_x_3 = {};
	cout << "struct_x_3.name=  " << struct_x_3.name << endl;
	cout << "struct_x_3.volume=  " << struct_x_3.volume << endl;
	cout << "struct_x_3.price=  " << struct_x_3.price << endl;
	
	cout << "---------------------------------------------------" << endl;
	struct_z struct_x_4= {"Tom",1,2};
	cout << "struct_x_4.name=  " << struct_x_4.name << endl;
	cout << "struct_x_4.volume=  " << struct_x_4.volume << endl;
	cout << "struct_x_4.price=  " << struct_x_4.price << endl;

	cout << "---------------------------------------------------" << endl;
	struct_z struct_x_5;
	struct_x_5 = struct_x_4;
	cout << "struct_x_5.name=  " << struct_x_5.name << endl;
	cout << "struct_x_5.volume=  " << struct_x_5.volume << endl;
	cout << "struct_x_5.price=  " << struct_x_5.price << endl;


	return 0;

}