#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void main()
{
//#define ZADACHA_1
//#define ZADACHA_2
//#define ZADACHA_3
//#define ZADACHA_4
#define ZADACHA_5

	setlocale(LC_ALL, "Russian");
#if defined ZADACHA_1
	const int SIZE = 5;
	int arr[SIZE] = {};
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif
#if defined ZADACHA_2
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8, 11, 13 };
	
	
	for (int i = 4; i >= 0; i--)
	{
		
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif
#if defined ZADACHA_3
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8, 11, 13 };
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма всех чисел массива = " << sum << endl;
#endif
#if defined ZADACHA_4
	const int SIZE = 5;
	int arr[SIZE] = {};
	int sum = 0;
	srand(time(NULL));
	
	for (int i = 0; i < SIZE; i++) 
	{
		arr[i] = rand();
		sum += arr[i]; // сумма всех чисел массива
		cout << "Элементы массива = " << arr[i] << " ";
		cout << endl;
	
	}
	cout << endl;
	cout << "Среднее арифметическое число массива = " << sum / SIZE << endl;
	
#endif
#if defined ZADACHA_5
	const int SIZE = 5;
	int arr[SIZE] = { 6, -3, 88, 111, -56 };
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 1; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "максимальное значение массива равно = " << max;
	cout << endl;
	
	for (int i = 1; i < SIZE; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << "Минимальное значение массива равно = " << min;
	cout << endl;
#endif

}