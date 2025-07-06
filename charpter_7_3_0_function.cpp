#include<iostream>
using namespace std;
int sum_arry(int arr[], int n);
//int sum_arry(int [], int);
int sum_arry1(int * arr, int n);
int main730()
{
	const int nums = 4;
	int arr_sum = 0;
	int arr[nums] = { 1, 2, 3, 4 };

	//arr_sum = sum_arry(arr, nums);
	arr_sum = sum_arry1(arr, nums);

	cout << "arr sum = " << arr_sum << endl;
	return 0;
}

int sum_arry(int arr[], int n)
{
	for (int i = 0; i < n; i++) {      //使用数组名和下标输出数组 
		cout << "x=" << arr[i] << endl;
	}
	cout << endl;

	cout << "arr n = " << n << endl;
	int i;
	int sum=0;
	for (i = 0; i < n; i++)
	{
		cout << "arr[i] " << arr[i] << endl;
		sum = sum + arr[i];
		cout << "sum  = " << sum << endl;
	}

	return sum;
}

int sum_arry1(int * arr, int n)
{
	for (int i = 0; i < n; i++) {      //使用数组名和下标输出数组 
		cout << "x=" << *arr << endl;
		arr = arr + 1;

	}
	cout << endl;
	arr = arr - n ;
	cout << "arr n = " << n << endl;
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		cout << "arr[i] " << *arr << endl;
		sum = sum + *arr;
		cout << "sum  = " << sum << endl;
		arr = arr + 1;
	}
	
	return sum;
}