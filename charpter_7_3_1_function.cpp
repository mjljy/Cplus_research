// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
using namespace std;

// function prototypes
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);  // don't change data
void revalue(double r, double ar[], int n);


int main731() {


	// 1填充数组

    double properties[Max];

    int size = fill_array(properties, Max);


    show_array(properties, size);

    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
   
    cin.get();

	return 0;
}

int fill_array(double ar[], int limit)
/*
函数头的声明这里, 也就没必要给出具体的数组的元素个数 没有对类型要求精确到这种地步
1. 输入负值 退出
2. 输入异常 退出

*/
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear(); // 异常输入的时候 清除异常
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n)
/* 修改所有的值都等于 原值*r同一个数*/
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}
