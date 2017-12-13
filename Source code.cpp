#include <iostream>
#include <stdio.h>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
double n, m;
char f[100] = "Vvid.txt";
int a[1000];
int ifa;
double D;

void nov_f()
{
	system("cls");
	cout << "Введіть назву нового файлу, або повну його адресу:";
	cin >> f;
	ifa = 0;
}

void Vvid()
{
	system("cls");
	int k, l;
	l = 0;
	ifstream G(f);
	while(!G.eof())
	{
		G >> k;
		a[l] = k;
		l++;
	}
	n = l;
	G.close();
	cout <<"\n"<< n<<endl;
	ifa = 1;
}

void Dysp_m()
{
	system("cls");
	int лулз;
	if (ifa != 1)
	{
		cout << "Для розблокування цієї функції виконайте пункт 2" << endl;
	}
	else
	{
		for (;;)
		{
			cout << "Введіть номер рядка, який ви бажаєте виконати:\n"
				<< "1)\tПорахувати дисперсію чисел, кратних введеному\n"
				<< "2)\tПорахувати дисперсію чисел, менших від введеного\n"
				<< "3)\tПорахувати дисперсію чисел, більших від введеного\n"
				<< "4)\tПорахувати дисперсію чисел, рівних введеному\n"
				<< "5)\tПовернутися до попереднього меню\n";
			cin >> лулз;
			if (лулз == 1)
			{
				system("cls");
				int число;
				m = 0;
				cout << "Введіть значення для ознаки:";
				cin >> число;
				for (int i = 0; i < n; i++)
				{
					if (a[i] % число == 0)
					{
						m++;
					}
				}
				D = (m*(n - m)) / (n*n);

				cout << "Дисперсія = " << D << endl;
			}
			if (лулз == 2)
			{
				system("cls");
				int число;
				m = 0;
				cout << "Введіть значення для ознаки:";
				cin >> число;
				for (int i = 0; i < n; i++)
				{
					if (a[i] < число)
					{
						m++;
					}
				}
				D = (m*(n - m)) / (n*n);
				cout << "Дисперсія = " << D << endl;
			}
			if (лулз == 3)
			{
				system("cls");
				int число;
				m = 0;
				cout << "Введіть значення для ознаки:";
				cin >> число;
				for (int i = 0; i < n; i++)
				{
					if (a[i] > число)
					{
						m++;
					}
				}
				D = (m*(n - m)) / (n*n);
				cout << "Дисперсія = " << D << endl;
			}
			if (лулз == 4)
			{
				system("cls");
				int число;
				m = 0;
				cout << "Введіть значення для ознаки:";
				cin >> число;
				for (int i = 0; i < n; i++)
				{
					if (a[i] = число)
					{
						m++;
					}
				}
				D = (m*(n - m)) / (n*n);
				cout << "Дисперсія = " << D << endl;
			}
			if (лулз == 5)
			{
				system("cls");
				break;
			}
		}
	}
}

void Vyvid()
{
	char файл[100];
	if (ifa != 1)
	{
		cout << "Для розблокування цієї функції виконайте пункт 2" << endl;
	}
	else
	{
		cout << "Введіть назву нового файлу: ";
		cin >> файл;
		ofstream G(файл);
		G << D << endl;
		G.close();
	}
}

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	for (;;)
	{
		int nom;
		cout << "Зчитування проходить з файлу:" << f << endl;
		cout << "Введіть номер рядка, який ви бажаєте виконати:\n"
			<< "1)\tВибрати новий файл\n"
			<< "2)\tЗчитати інформацію\n"
			<< "3)\tПорахувати дисперсію\n"
			<< "4)\tВивести результат в файл\n"
			<< "5)\tЗавершити програму\n";
		cin >> nom;
		if (nom == 1)nov_f();
		if (nom == 2)Vvid();
		if (nom == 3)Dysp_m();
		if (nom == 4)Vyvid();
		if (nom == 5)exit(0);
		if (nom > 5 || nom < 1)system("cls");
	}
}
