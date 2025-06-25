#include <iostream>
using namespace  std;
char* getname(void);   // function prototype
struct inflatable {

	char name[20];
	float volume;
	double price;
};

int main() 
{
    //int price1;
    //int price2;
    //inflatable* ps = new inflatable; // allot memory for structure
    //cout << "Enter name of inflatable item: ";
    //cin.get(ps->name, 20);            // method 1 for member access
    //cout << "Enter volume in cubic feet: ";
    //cin >> (*ps).volume;              // method 2 for member access
    //cout << "Enter price: $";
    //cin >> ps->price;
    //cout << "Name: " << (*ps).name << endl;              // method 2
    //cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    //cout << "Price ps->price    : $" << ps->price << endl;             // method 1
    //cout << "Price (*ps).name   : $" << (*ps).price << endl;
    //price1 = ps->price;
    //price2 = (*ps).price;
    //cout << "Price1: $" << price1 << endl;
    //cout << "Price2: $" << price2 << endl;
    //delete ps;    // free memory used by structure
    //cout << "------------------------------------------------"  << endl;

    char* name;        // create pointer but no storage
    name = getname();   // assign address of string to name
    cout << name << " at " << (int*)name << "\n";

    delete[] name;     // memory freed

    name = getname();   // reuse freed memory
    cout << name << " at " << (int*)name << "\n";
    delete[] name;     // memory freed again

    return 0;
}

char * getname()        // return pointer to new string
{
    char temp[80];      // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    // 先把输入传递给数组temp
    cout << "temp = " << temp << endl;

    char* pn = new char[strlen(temp) + 1];
    // 声明初始化指针pn  new动态数组 每次都会重新开辟一个新的地址 新的内存空间
    strcpy(pn, temp);   // copy string into smaller space
    //复制操作
    // new pn   一个数组指针 指定了数组元素的个数
    // old temp   一个数组名字
    // 操作 temp 的地址存储到 指针pn里面  返回指针pn
    return pn;          // temp lost when function ends
}
