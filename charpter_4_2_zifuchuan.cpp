#include <iostream>
using namespace std;
int main()
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

	cout << "-------------------------------" << endl;


	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];

	cout << " Enter your name:\n";
	//cin >> name;
	cin.getline(name, 20);
	cout << "Enter your favorite dessert:\n";

	//cin >> dessert;
	cin.getline(dessert, 20);

	cout << "I have " << dessert;
	cout << "for you " << name << "\n";

	return 0;
}