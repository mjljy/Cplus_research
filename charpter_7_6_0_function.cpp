#include <iostream>
using namespace std;

struct travel_time {
	int hours;
	int times;
};
travel_time sum(travel_time, travel_time);
travel_time* sum1(travel_time*, travel_time*);
travel_time * sum3(travel_time * , travel_time *);


int main760() {

	travel_time t1 = { 5,30 };
	travel_time t2 = { 3,20 };
	travel_time t3 = sum(t1, t2);
	cout << "t3.hours" << t3.hours << endl;
	cout << "t3.times" << t3.times << endl;
	cout << "--------------------" << endl;


	travel_time* t4 = sum1(&t1, &t2);

	cout << "t4.hours" << t4->hours << endl;
	cout << "t4.times" << t4->times << endl;
	cout << "--------------------" << endl;

	travel_time* t7 = sum3(&t1, &t2);
	cout << "t7" << t7 << endl;
	cout << "t7.hours" << t7->hours << endl;
	cout << "t7.times" << t7->times << endl;
	cout << "--------------------" << endl;



	return 0;
}

travel_time sum(travel_time t1, travel_time t2) {
	travel_time t3;
	t3.hours = t1.hours + t2.hours;
	t3.times = t1.times + t2.times;
	return t3;

}

travel_time* sum1(travel_time* t1, travel_time* t2)
{
	travel_time* t4 = new travel_time;
	t4->hours = (*t1).hours + t2->hours;
	t4->times = (*t1).times + t2->times;
	cout << "t4" << t4 << endl;
	cout << "t4.hours" << (*t4).hours << endl;
	cout << "t4.times" << (*t4).times << endl;
	return t4;
}

travel_time* sum3(travel_time* t1, travel_time* t2) {
	cout << "t2" << t2 << endl;
	t2->hours = (*t1).hours + t2->hours;
	t2->times = (*t1).times + t2->times;
	cout << "t2.hours" << (*t2).hours << endl;
	cout << "t2.times" << (*t2).times << endl;
	return t2;
}