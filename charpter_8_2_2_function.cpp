#include <iostream>
using namespace std;
void swapr(int& a, int& b);   // a, b are aliases for ints  
//使用引用传递时的，原型参数书写方式 (int& a, int& b)  
//&在左边 左值表示是引用 =&x 在等号右边表示地址
void swapp(int* p, int* q);   // p, q are addresses of ints
// 按地址传递
void swapv(int a, int b);       // a, b are new variables
// 按值传递


int main822() {

    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << "wallet2 = $" << wallet2 << endl;
    cout << "&wallet1 = $" << &wallet1;
    cout << "&wallet2 = $" << &wallet2 << endl;


    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);   // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "&wallet1 = $" << &wallet1;
    cout << "&wallet2 = $" << &wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2); // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "&wallet1 = $" << &wallet1;
    cout << "&wallet2 = $" << &wallet2 << endl;

    cout << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2);   // pass values of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "&wallet1 = $" << &wallet1;
    cout << "&wallet2 = $" << &wallet2 << endl;
    // cin.get();
    return 0;

}
void swapr(int& a, int& b)    // use references
{
    int temp;// 需要创建一个中间变量

    temp = a;       // use a, b for values of variables
    a = b;
    b = temp;

}void swapp(int* p, int* q)    // use pointers
{
    int temp;

    temp = *p;      // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)        // try using values
{
    int temp;

    temp = a;      // use a, b for values of variables
    a = b;
    b = temp;
}
