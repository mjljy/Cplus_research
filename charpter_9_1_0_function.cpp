// file1.cpp -- example of a three-file program
#include <iostream>
#include "charpter_9_1_1_head.h" // structure templates, function prototypes
using namespace std;
int main910()
{
    rect910 rplace;
    polar910 pplace;
    cout << "charpter_9_1_1_XXXX >>>>>" << charpter_9_1_1_XXXX << endl;
    //cout << "charpter_9_1_1_head_H_ >>>>>" << charpter_9_1_1_head_H_ << endl;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)  // slick use of cin
    {
        

        pplace = rect_to_polar910(rplace);
        show_polar910(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Bye!\n";
    // keep window open in MSVC++
    /*
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cin.get();
    */
    return 0;
}
