#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };
	//arr[2] = 3; // - ���������� �� ������� �������� ������� ����� �������� � ���� �������� 3.
	// SIZE - 1 ��� n - 1;
	for(int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}