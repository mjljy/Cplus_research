#include <iostream>
#include <string>
using namespace std;
//int main()
int main42()
{
	cout << "xxxx  "  "yyyyyy\n";
	cout << "xxxx      yyyyyy\n";
	cout << "xxxx      "
		"yyyyyy\n";

	// 上述表示都是OK的


	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";

	cout << "Howdy! I'm  " << name2;
	cout << "!  what's your name ? \n ";
	cin >> name1;
	cout << "Well,  " << name1 << ", your name has ";
	cout << strlen(name1) << "letters and is sotred\n";
	cout << "in an array of " << sizeof(name1) << "bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name:";
	cout << name2 << endl;

	cout << "------------------------------- lonely use  cin " << endl;


	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];

	cout << " Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";

	cin >> dessert;
	cin.getline(dessert, 20);

	cout << "I have " << dessert;
	cout << "for you " << name << "\n";

	cout << "------------------------------- lonely use  getline " << endl;

	char name10[Arsize];
	char dessert10[Arsize];


	cout << " Enter your name:\n";
	cin.getline(name10, 20);
	cout << "Enter your favorite dessert:\n";

	cin.getline(dessert10, 20);

	cout << "I have " << dessert10;
	cout << "for you " << name10 << "\n";


	cout << "------------------------------- first cin then .get()  then  cin.getline " << endl;

	char name11[Arsize];
	char dessert11[Arsize];


	cout << " Enter your name:\n";
	cin >> name11;
	//cin.ignore();
	cin.get();
	cout << "Enter your favorite dessert:\n";

	cin.getline(dessert11, 20);

	cout << "I have " << dessert11;
	cout << "for you " << name11 << "\n";

	cout << "----------------------------------- lonely use   cin.get  " << endl;


	char name12[Arsize];
	char dessert12[Arsize];


	cout << " Enter your name12:\n";
	cin.get(name12, Arsize);

	cin.get();

	cout << " Enter your dessert12:\n";
	cin.get(dessert12, Arsize);


	cout << "I have " << dessert12;
	cout << "for you " << name12 << "\n";

	cout << "----------------------------------- many inputs values" << endl;
	string namex;
	string passwordx;
	cout << "请输入name和password：";
	cin >> namex >> passwordx;
	cout << "你输入的name是：" << namex << endl;
	cout << "你输入的password是：" << passwordx << endl;
	/*请输入name和password：xx yy
	你输入的name是：xx
	你输入的password是：yy
	*/


	return 0;
}