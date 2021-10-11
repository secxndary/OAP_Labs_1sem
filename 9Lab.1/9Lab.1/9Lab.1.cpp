#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	const int A = 100;
	int i, rm, W[A], a, k = 3;
	cout << "Введите размер массива:" << endl;
	cin >> rm;
	cout << "Массив W: " << endl;
	srand((unsigned)time(NULL));
	for (i = 1; i <= rm; i++)
	{
		W[i] = rand() % 99;
		cout << W[i] << " ";
	}
	cout << "\nВведите элемент который надо удалить: \n";
	cin >> a;
	for (i = 1; i <= rm; i++)
	{
		if (W[i] == a)
		{
			k = 0;
			for (i = 1; i <= rm; i++)
			{
				if (W[i] == a)
				{
					++k;
					--rm;
				}
				W[i] = W[i + k];
			}
		}
	}
	cout << "Новый массив: " << endl;
	for (i = 1; i <= rm; i++)
	{
		cout << W[i] << " ";
	}
	for (i = 1; i <= rm; i++)
	{
		if (W[i] % 2 == 0) {
			W[i - 1] = 1;
		}
	}
	cout << "\nМассив с единицами перед четными элементами:\n";
	for (i = 1; i <= rm; i++) cout << W[i] << " ";
}