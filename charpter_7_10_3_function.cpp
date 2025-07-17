#include <iostream>
using namespace std;


const double* f1(const double ar[], int n); 
// 返回  一个const double 类型的指针
// 输入  const double ar[]  int

const double* f2(const double[], int);
const double* f3(const double*, int);

int main()
{
    using namespace std;
    double av[3] = { 1112.3, 1542.6, 2227.9 };

    // pointer to a function
    // 定义一个函数f1
    // 声明一个函数指针 指向f1=const double* f1(const double ar[], int n); =  const double* (*p1)(const double ar[], int n); 

    const double* (*p1)(const double*, int) = f1;

    auto p2 = f2;  // C++0x automatic type deduction
    // pre-C++0x can use the following code instead
    // const double *(*p2)(const double *, int) = f2;
    // 函数地址的传递  函数的引用   使用auto 复制了一个f2 一样的函数 f3



    cout << "Using pointers to functions:\n";
    cout << "Address  Value\np1  is a   pointer  (*p1) =  f1" << endl;
    cout << "p1 return a double pointer" << endl;
    cout << "p1= pointer= (*p1)(av, 3) = " << (*p1)(av, 3) <<  endl;
    cout << "p1= pointer= * (*p1)(av, 3) = " << *(*p1)(av, 3) << endl;
    cout << "f1= " << f1(av, 3)     << endl;
    cout << "*f1= " << *f1(av, 3) << endl;
    cout << "f2= " << f2(av, 3) << endl;
    cout << "*f2= " << *f2(av, 3) << endl;
    cout << "p2= " << p2(av, 3) << endl;
    cout << "*p2= " << *p2(av, 3) << endl;


    // pa an array of pointers
    // auto doesn't work with list initialization

    const double* (*pa[3])(const double*, int) = { f1,f2,f3 };
    // but it does work for initializing to a single value
    // pb a pointer to first element of pa
    auto pb = pa;
    // pre-C++0x can use the following code instead
    // const double *(**pb)(const double *, int) = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << " Address  Value\n";
    for (int i = 0; i < 3; i++)
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << " Address  Value\n";
    for (int i = 0; i < 3; i++)
        cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

    // what about a pointer to an array of function pointers
    cout << "\nUsing pointers to an array of pointers:\n";
    cout << " Address  Value\n";
    // easy way to declare pc 
    auto pc = &pa;
    // pre-C++0x can use the following code instead
   // const double *(*(*pc)[3])(const double *, int) = &pa;
    cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
    // hard way to declare pd
    const double* (*(*pd)[3])(const double*, int) = &pa;
    // store return value in pdb
    const double* pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;
    // alternative notation
    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
    // cin.get();
    return 0;
}

// some rather dull functions

const double* f1(const double* ar, int n)
{
    // 这里没有做任何的处理 直接把传进来的地址 又传了回去
    return ar;
}
const double* f2(const double ar[], int n)
{
    return ar + 1;
}
const double* f3(const double ar[], int n)
{
    return ar + 2;
}
