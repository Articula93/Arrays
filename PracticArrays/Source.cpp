#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void main()
{
//#define SUMMA_ELEMENTOV
//#define REWRITE
//#define RANDOM
//#define RANDOM2
#define RANDOM3
//#define TASK1
//#define TASK2

	setlocale(LC_ALL, "Russian");
#if defined SUMMA_ELEMENTOV
	//Напишите программу, в которой определен числовой массив из 5 элементов, значения для которых вводятся с клавиатуры в цикле.
	//Рассчитайте сумму всех четных элементов этого массива.
	const int n = 10;
	int arr[n] = {};
	int sum = 0;
	cout << "Введите 10 элементов массива " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];

		}

	}
	cout << endl;
	cout << "Сумма всех четных чисел массива = " << sum;


#endif
#if defined REWRITE
	//Напишите программу, в которой создается массив numbers1 из 5 элементов и инициализируется некоторыми значениями.
	//Также в программе создается второй массив numbers2 из трех элементов.
   //Затем все значения из массива numbers1, начиная с третьего элемента копируются в массив numbers2.
	const int n = 5;
	const int m = 3;
	int number1[n] = { 45, 34, 11, 9, 22 };
	int number2[m];
	for (int i = 0; i < n; i++)
	{
		cout << "Элементы первого массива = " << number1[i] << " ";
		cout << endl;
	}
	cout << "=========================================================";
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		number2[i] = number1[i + 2];
		cout << "Элементы второго массива = " << number2[i] << " ";
		cout << endl;
	}

#endif
#if defined RANDOM
	const int n = 10;
	int number[n] = {};
	srand(time(NULL));
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		number[i] = rand();
		cout << " Элементы массива = " << number[i] << " ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if (number[i] % 2 == 0)
		{
			sum += number[i];
		}
	}
	cout << endl;
	sum = sum / n;
	cout << "Среднеe значение четных элементов массива = " << sum;
#endif
#if defined RANDOM2
	const int n = 10;
	int random1[n] = {};
	int random2[n] = {};
	int random3[n] = {};
	int random4[n] = {};
	float random5[n] = {};
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		random1[i] = rand() % 7;
		random2[i] = 1 + rand() % 8;
		random3[i] = 100 + rand() % 501;
		random4[i] = rand() % 61 - 30;
		random5[i] = 0.01 * (rand() % 201);
	}
	cout << endl;
	cout << "Элементы массива от 0 до 6 " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << random1[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива от 1 до 8 " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << random2[i] << "\t";
	}
	cout << endl;
	cout << " Элементы массива от 100 до 600 " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << random3[i] << "\t";
	}
	cout << endl;
	cout << " Элементы массива от -30 до 30 " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << random4[i] << "\t";
	}
	cout << endl;
	cout << "Элементы массива от 0.01 до 2 " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << random5[i] << "\t";
	}

#endif
#if defined RANDOM3
	int randomnumber = 0;
	int version = 0;
	srand(time(NULL));
	randomnumber = 1 + rand() % 10;
	cout << "Угадайте число от 1 до 10 с 3ех раз" << endl;
	cout << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		cout << " Введите число " << endl;
		cin >> version;
		if (randomnumber == version)
		{
			cout << "Да я загадал это число! " << endl;
			cout << endl;
		}
		else
		{
			cout << " Нет, я загадал не это число :( " << endl;
		}
	}
#endif
#if defined TASK1
	//Заполнить массив из 50 - ти элементов нечётными числами от 1 до 99.
	const int n = 50;
	int arr[n] = {};
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % 100;
		if (arr[i] % 2 != 0)
		{
			cout << arr[i] << "|";
		}
	}
#endif
#if defined TASK2
	//Создать массив типа int на 10 элементов и заполнить его случайными числами от 7 до 14.
	//После заполнения перезаписать все числа, которые больше  десяти : от хранимого значение отнять 10. 
	//Например  в  ячейке хранится число 12 : 12 – 10 = 2. Записать в эту ячейку 2
	const int n = 10;
	int arr[n] = {};
	int uplimit = 14;
	int lowlimit = 7;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = lowlimit + rand() % (uplimit - lowlimit + 1);
		cout << arr[i] << "|";
	}
	cout << " \n\n";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 10)
		{
			arr[i] = arr[i] - 10;
		}
		cout << arr[i] << "|";
	}
	cout << "\n\n";
	
#endif
}