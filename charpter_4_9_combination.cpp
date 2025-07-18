#include <iostream>
using namespace  std;

struct antarctica_years_end
{
    int year;
    /* some really interesting data, etc. */
};

int main49()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end* pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3]; // array of 3 structures
    trio[0].year = 2003;
    cout << trio->year << endl;
    const antarctica_years_end* arp[3] = { &s01, &s02, &s03 };
    cout << arp[1]->year << endl;
    const antarctica_years_end** ppa = arp;
    auto ppb = arp; // C++0x automatic type deduction
    // or else use const antarctica_years_end ** ppb = arp; 
    cout << (*ppa)->year << endl;
    cout << (*(ppb + 1))->year << endl;
    // cin.get();
    return 0;
}