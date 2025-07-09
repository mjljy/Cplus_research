#include <iostream>
#include <cmath>
using namespace std;

struct rect {
	double x;
	double y;
};

struct polar {
	double distance;
	double angle;
};

void show_polar(polar *);
polar * rect_to_polar(rect * );


int main762() {

	rect rplace;
	polar  * pplace;

	rplace.x = 30;
	rplace.y = 40;
	pplace = rect_to_polar(&rplace);
	show_polar(pplace);

	return 0;
}

void show_polar(polar * dapos)
{
	const double a = 57.29577951;
	cout << "distance " << (*dapos).distance << endl;
	cout << "angle " << (*dapos).angle * a << endl;
}
polar * rect_to_polar(rect * xypos) {
	polar* answer = new polar;
	(*answer).distance = sqrt((*xypos).x * (*xypos).x + (*xypos).y * (*xypos).y);
	(*answer).angle = atan2((*xypos).y, (*xypos).x);

	return answer;
}