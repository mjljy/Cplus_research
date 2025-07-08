#include <iostream>
using namespace std;

struct travel_time {
	int hours;
	int times;
};
travel_time sum(travel_time, travel_time);
travel_time * sum1(travel_time * , travel_time *);

int main760() {

	travel_time t1 = { 5,30 };
	travel_time t2 = { 3,20 };
	travel_time t3 = sum(t1, t2);
	cout << "t3.hours" << t3.hours << endl;
	cout << "t3.times" << t3.times << endl;
	cout << "--------------------" << endl;

	travel_time* t5 = &t1;
	travel_time* t6 = &t2;

	travel_time  * t4 = sum1(t5, t6);
	//cout << "t4" << t4 << endl;

	cout << "t4.hours" << t4->hours << endl;
	cout << "t4.times" << t4->times << endl;
	cout << "--------------------" << endl;


	/*cout << "t4.hours=" << (*t4).hours << endl;
	cout << "t4.times=" << (*t4).times << endl;

	cout << "t4.hours=" << t4->hours << endl;
	cout << "t4.times=" << t4->times << endl;*/

	return 0;
}

travel_time sum(travel_time t1, travel_time t2) {
	travel_time t3;
	t3.hours = t1.hours + t2.hours;
	t3.times = t1.times + t2.times;
	return t3;

}

travel_time  * sum1(  travel_time *  t1,  travel_time*  t2) {
	travel_time  * t4  = new travel_time;
	t4->hours = (*t1).hours + t2->hours;
	t4->times = (*t1).times + t2->times;
	cout << "t4" << t4 << endl;
	cout << "t4.hours" << (*t4).hours << endl;
	cout << "t4.times" << (*t4).times << endl;
	return t4;

}