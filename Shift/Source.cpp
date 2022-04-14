#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int temp = arr[0];
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n - 1; i++)
	{
		{
			arr[i] = arr[i + 1];
			cout << arr[i] << " ";
		}
	}
	arr[n - 1] = temp;
	cout << temp;
}
