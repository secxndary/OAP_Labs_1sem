
#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	const int Q = 100;
	int i, rm, W[Q], a, j, check = 0;
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, 
	sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0, sum9 = 0;
	cout << "Введите число дней наблюдения:" << endl;
	cin >> rm;
	int k = rm / 7;
	cout << "Ежедневные измерения: " << endl;
	srand((unsigned)time(NULL));
	for (i = 1; i <= rm; i++)
	{
		W[i] = rand() % 99;
		cout << W[i] << " ";
	}
	for (i = 1; i <= 7; i++) 
		sum1 += W[i];
	for (i = 7; i <= 14; i++) 
		sum2 += W[i];
	for (i = 14; i <= 21; i++) 
		sum3 += W[i];
	for (i = 21; i <= 28; i++) 
		sum4 += W[i];
	for (i = 28; i <= 35; i++) 
		sum5 += W[i];
	for (i = 35; i <= 42; i++) 
		sum6 += W[i];
	for (i = 42; i <= 49; i++) 
		sum7 += W[i];
	for (i = 49; i <= 56; i++) 
		sum8 += W[i];
	for (i = 56; i <= 63; i++) 
		sum9 += W[i];
	int A[] = { sum1, sum2, sum3, sum4, sum5, sum6, sum7, sum8, sum9 };
	cout << "\nВыпало за каждую неделю::\n";
	for (j = 1; j <= 8; j++) cout << A[j] << " ";
	int max = A[1];
	for (j = 1; j <= 8; j++)
		if (A[j] > max) {
			max = A[j];
			check++;
		}
	cout <<"\nНеделя с максимальным кол-вом осадков: " <<check;
}
