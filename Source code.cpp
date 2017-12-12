#include <iostream>
#include <stdio.h>
#include <fstream>
#include <windows.h>
#include <string.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
  for (;;)
	{
		int nom;
		cout << "Введіть номер рядка, який ви бажаєте виконати:\n"
			<< "1)\tВибрати новий файл\n"
			<< "2)\tЗчитати інформацію\n"
			<< "3)\tВорахувати дисперсію\n"
			<< "4)\tВивести результат в файл\n"
			<< "5)\tЗавершити програму\n";
		cin >> nom;
		if (nom == 1)nova_hra();
		if (nom == 2)perevirka_po_riad();
		if (nom == 3)perevirka_po_stowp();
		if (nom == 4)vyvid();
		if (nom == 5)exit(0);
		if (nom > 5 || nom < 1)vyvid();
	}
}
