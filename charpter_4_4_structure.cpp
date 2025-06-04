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

	cout << "---------------------------------------------------" << endl;
	struct {
		char name[20];
		float volume;
		double price;
	} struct_x_10 = {
		"Glorious Gloria",
		1.88,
		29.99
	
	}; // Initialized to to the incicated values

	cout << "struct_x_10.name=  " << struct_x_10.name << endl;
	cout << "struct_x_10.volume=  " << struct_x_10.volume << endl;
	cout << "struct_x_10.price=  " << struct_x_10.price << endl;

	cout << "---------------------------------------------------" << endl;
	struct_z struct_x_11[2] = {
		{"Glorious Gloria",1.88,29.99},
		{"Glorious Gloria1",2.88,39.99}
	};
		 
	cout << "struct_x_11[0].name=  " << struct_x_11[0].name << endl;
	cout << "struct_x_11[0].volume=  " << struct_x_11[0].volume << endl;


	cout << "struct_x_11[1].name=  " << struct_x_11[1].name << endl;
	cout << "struct_x_11[1].volume=  " << struct_x_11[1].volume << endl;
	cout << "---------------------------------------------------" << endl;


	struct torgle_register {

		unsigned  int SN : 4;
		unsigned  int : 4; // 可以使用没有名称的字段来提供间距 
		bool goodin : 1;
		bool goodin1 : 1;
	};
	torgle_register tr = { 14,true,false };


	cout << "tr.SN =  " << tr.SN << endl;
	cout << "tr.goodin =  " << tr.goodin << endl;

	return 0;

}