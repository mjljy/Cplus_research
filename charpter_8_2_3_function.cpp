#include <iostream>
using namespace std;
double cube2(double a); // 按值传递
double refcube(double& ra); //按引用传递

int main()
{
    using namespace std;
    double x = 3.0;

    cout << cube2(x); // 按值传递
    cout << " = cube of " << x << endl;
    cout << refcube(x); //按引用传递

    cout << " = cube of " << x << endl;
    // cin.get();
    return 0;
}

double cube2(double a)
{
    a *= a * a; // 乘法优先级优先与乘等运算
    return a;
}

double refcube(double& ra)
{
    ra *= ra * ra;
    return ra;
}
