// file2.cpp -- contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "charpter_9_1_1_head.h" // structure templates, function prototypes

// convert rectangular to polar coordinates
polar910 rect_to_polar910 (rect910 xypos)
{
    using namespace std;
    polar910 answer;

    answer.distance =
        sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;      // returns a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar910(polar910 dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
