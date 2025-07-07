#include <iostream>
using namespace std;
int sum(int (*arr)[4],int );
//int sum(int (arr[])[4], int);
//int sum(int arr[][4], int);
int sum1(int arr[][4], int);
int main741() {


	int data[3][4] = { {1,2,3,4},{9,8,7,6},{2,4,6,8}, };
	int total = sum(data,3);
	cout << "total=" << total;


	return 0;
}

int sum(int (*arr)[4], int) {

	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int ii = 0; ii <= 3; ii++)
		{
			total = total + arr[i][ii];
		}
	}

	return total;

}

//int sum1(int (*arr)[4], int) {
int sum1(int arr[][4], int) {

	int total = 0;
	for (int i = 0; i < 3; i++)
	{

		for (int ii = 0; ii <= 3; ii++)
		{
			//total = total + arr[i][ii];
			//total = total + *(arr+i)[ii];
			total = total + *(*(arr + i)+ii);
		}
	}

	return total;

}