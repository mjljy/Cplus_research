// arrfun4.cpp -- functions with an array range
#include <iostream>
const int ArSize = 8;
int sum_arr(const int* begin, const int* end);
int sum_arr_include_end(const int* begin, const int* end);
int main734()
{
    using namespace std;
    int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
    //  some systems require preceding int with static to
    //  enable array initialization

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    int sum1 = sum_arr(cookies, cookies + (ArSize-1));
    cout << "Total cookies eaten1: " << sum1 << endl;

    sum = sum_arr(cookies, cookies + 3);        // first 3 elements
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, cookies + 8);    // last 4 elements
    cout << "Last four eaters ate " << sum << " cookies.\n";
    cout << "------------------------------------------------" << endl;
    int sum2 = sum_arr_include_end(cookies, cookies + ArSize);
    cout << "all eaters ate " << sum2 << " cookies.\n";

    int sum3 = sum_arr_include_end(cookies, cookies + (ArSize-1));
    cout << "all eaters ate " << sum3 << " cookies.\n";
    // cin.get();

    return 0;
}

// return the sum of an integer array
int sum_arr(const int* begin, const int* end)
{
    const int* pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;
}
// return the sum of an integer array
int sum_arr_include_end(const int* begin, const int* end)
{
    const int* pt;
    int total = 0;

    for (pt = begin; pt <= end; pt++)
        total = total + *pt;
    return total;
}