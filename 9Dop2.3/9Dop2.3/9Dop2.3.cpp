#include <iostream>
#include <ctime>
using namespace std;

//int main()
//{
//	setlocale(LC_CTYPE, "rus");
//	srand(time(NULL));
//
//	int AmountOfTheSameMembers = 0;
//	int SIZE;
//	cout << " Введите размер массива: ";
//	cin >> SIZE;
//	int* mass = new int[SIZE];
//
//	for (int i = 0; i < SIZE; ++i)
//		mass[i] = rand() % 20;
//	cout << "=============================" << endl;
//	for (int i = 0; i < SIZE; ++i)
//		cout << "[" << i << "]" << mass[i] << endl;
//	cout << "=========================================" << endl;
//	for (int i = 0; i < SIZE - 1; ++i)
//	{
//		if (mass[i] == mass[i + 1])
//		{
//			AmountOfTheSameMembers++;
//			cout << " Элементы под номерами " << i << " и " << i + 1 << " равны " << mass[i] <<";"<< endl;
//		}
//	}
//	cout << "=========================================" << endl;
//	cout << "Итого " << AmountOfTheSameMembers << " равных пар " << endl;
//}
//
//



#include <iostream>
#include <ctime>
using namespace std;

void FindFibonacci(int* mass, int SIZE)
{
	int* v = new int[50];
	v[0] = 0;
	v[1] = 1;
	int counter = 0;
	int FibonacciMaxSize = 47;
	cout << "Все числа Фибоначчи, вмещающиеся в тип данных int:\n";
	for (int i = 2; i < FibonacciMaxSize; ++i)
	{
		v[i] = v[i - 1] + v[i - 2];
		cout << " [" << i << "] " << v[i] << endl;

	}
	cout << "===================================================" << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < FibonacciMaxSize; ++j)
		{
			if (mass[i] == v[j])
			{
				cout << "Элемент массива [ " << i << " ] " << mass[i] << " является числом Фиббоначи " << v[j] << endl;
				counter++;
			}
		}
	}
	if (counter == 0)
	{
		cout << " В массиве нет чисел Фиббоначи " << endl;
	}
}

void PrintArray(int* mass, int SIZE)
{
	cout << "Массив случайных чисел:\n";
	for (int i = 0; i < SIZE; ++i)
		cout << "[" << i << "]" << mass[i] << endl;

}

void FillArray(int* mass, int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
		mass[i] = rand() % 1000 + 1;
}


int main()
{
	setlocale(LC_CTYPE, "rus");
	srand(time(NULL));
	int SIZE = 20;
	int* mass = new int[SIZE];
	FillArray(mass, SIZE);
	PrintArray(mass, SIZE);
	cout << "===================================================" << endl;
	FindFibonacci(mass, SIZE);
}