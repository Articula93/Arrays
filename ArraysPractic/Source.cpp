#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void main()
{
	//#define SUMMA_ELEMENTOV
	//#define REWRITE
	//#define RANDOM
#define RANDOM2
	setlocale(LC_ALL, "Russian");
#if defined SUMMA_ELEMENTOV
	//�������� ���������, � ������� ��������� �������� ������ �� 5 ���������, �������� ��� ������� �������� � ���������� � �����.
	//����������� ����� ���� ������ ��������� ����� �������.
	const int n = 10;
	int arr[n] = {};
	int sum = 0;
	cout << "������� 10 ��������� ������� " << endl;
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
	cout << "����� ���� ������ ����� ������� = " << sum;


#endif
#if defined REWRITE
	//�������� ���������, � ������� ��������� ������ numbers1 �� 5 ��������� � ���������������� ���������� ����������.
	//����� � ��������� ��������� ������ ������ numbers2 �� ���� ���������.
   //����� ��� �������� �� ������� numbers1, ������� � �������� �������� ���������� � ������ numbers2.
	const int n = 5;
	const int m = 3;
	int number1[n] = { 45, 34, 11, 9, 22 };
	int number2[m];
	for (int i = 0; i < n; i++)
	{
		cout << "�������� ������� ������� = " << number1[i] << " ";
		cout << endl;
	}
	cout << "=========================================================";
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		number2[i] = number1[i + 2];
		cout << "�������� ������� ������� = " << number2[i] << " ";
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
		cout << " �������� ������� = " << number[i] << " ";
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
	cout << "������e �������� ������ ��������� ������� = " << sum;
#endif
#if defined RANDOM2
	const int n = 10;
	int random1[n] = {};
	int random[n] = {};
	int random3[n] = {};
	int random4[n] = {};
	int random5[n] = {};
	srand(time(NULL))
	for(int i = 0; i < n; i++)
	{
		random1[i] = rand() % 7;
		random2[i] = 1 + 
	}




#endif
}