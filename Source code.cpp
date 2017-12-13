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
