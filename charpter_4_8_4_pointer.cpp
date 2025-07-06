#include <iostream>
using namespace  std;
char* getname(void);   // function prototype
int demo1();
int demo2();
int demo3();

struct inflatable {

	char name[20];
	float volume;
	double price;
};

int main484() 
{

    //demo1();
    //demo2();
    demo3();

    return 0;
}

int demo3()
{

    struct antractica_years_end {
        int year;
    };

    antractica_years_end s01, s02, s03;
    s01 = { 1998 };
    s02 = { 1999 };
    s03 = { 2000 };
    //创建结构数组 元素需要先初始化
    antractica_years_end  arp_arry[3] = { s01, s02, s03 };
    s01.year = 1998;
    antractica_years_end  trio[3];
    trio[0].year = 2003;
    //*(trio+1).year = 2004; 没有结构名字的结构不能使用句点运算符 只能用箭头运算符
    (trio + 1)->year = 2004;

    cout << "arp_arry[0].year = " <<  arp_arry[0].year << endl;
    // 创建结构指针数组
    antractica_years_end* arp[3] = { &s01,&s02,&s03 };
    cout << "arp[0].year = " << arp[0]->year << endl;
    cout << "arp[0].year = " << (*arp[0]).year << endl;
    cout << "-------------------------------------" << endl;
    antractica_years_end * * ppb = arp; // 二级指针  指针的指针
    //auto ppa = arp;
    

    cout << "ppb **.year = " << (*(*(ppb))).year << endl;
    cout << "ppb *->.year = " << (*(ppb))->year << endl;
    cout << "ppb+1 **.year = " << (*(*(ppb+1))).year << endl;
    cout << "ppb *->.year = " << (*(ppb+1))->year << endl;
    cout << "-------------------------------------" << endl;
    antractica_years_end ** ppb1[1] = { arp };
    //auto ppa1[1] = { arp };
    cout << "ppb1 **.year = " << (*(*(ppb1[0]))).year << endl;
    cout << "ppb1 +1 **.year = " << (*(*(ppb1[0]+1))).year << endl;
    cout << "ppb1 *->year = " << (*(ppb1[0]))->year << endl;
    cout << "ppb1 +1 *->.year = " << (*(ppb1[0]+1))->year << endl;

    cout << "-------------------------------------" << endl;

    return 0;


}

int demo2()
{
    char* pointer_[5];
    char* pointer_1;;
    char name[20] = ">>>>>>>>>>>>>>>>";
    pointer_1 = name;
    cout << "pointer_1 = " << pointer_1 << endl;
    cout << "name = " << name << endl;
    cout << "pointer_1 = " << *pointer_1 << endl;
    pointer_[0] = pointer_1;
    cout << "pointer_[0] = " << pointer_[0] << endl;

    cout << "-------------------------------------" << endl;

    inflatable* pointer_2;

    inflatable inf1 = {
        "every",
        100.1,
        100.2 };
    pointer_2 = &inf1;
    cout << "pointer_2 = " << (*pointer_2).name << endl;
    //pointer_[1] = &inf1;

    return 0;

}

int demo1()
{

    int price1;
    int price2;
    inflatable* ps = new inflatable; // allot memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);            // method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;              // method 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;              // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    cout << "Price ps->price    : $" << ps->price << endl;             // method 1
    cout << "Price (*ps).name   : $" << (*ps).price << endl;
    price1 = ps->price;
    price2 = (*ps).price;
    cout << "Price1: $" << price1 << endl;
    cout << "Price2: $" << price2 << endl;
    delete ps;    // free memory used by structure
    cout << "------------------------------------------------"  << endl;

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
