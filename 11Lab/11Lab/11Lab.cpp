#include <iostream>
#include <ctime>
using namespace std;

//Variant 3

//int main()
//{
//	const int n = 60;
//	int A[n], B[n], t, size, cA = 0, cB = 0;
//	cout << "Enter size of array: ";
//	cin >> size;
//
//	for (int i = 0; i < size; i++) 
//		*(A + i) = rand() % 99;
//
//	for (int i = 0; i < size; i++) 
//		*(B + i) = rand() % 99;
//
//	cout << "\nEnter t: ";
//	cin >> t;
//
//	for (int i = 0; i < size; i++)
//		if (*(A + i) < t) cA++;
//
//	for (int i = 0; i < size; i++)
//		if (*(B + i) < t) cB++;
//
//	if (cA > cB) {
//		cout << "\nArray A[] (" << cA << " elements less than t = " << t << "):\n";
//		for (int i = 0; i < size; i++)
//			cout << "A[" << i << "] = " << *(A + i) << endl;
//		cout << "\nArray B[]: (" << cB << " elements less than t = " << t << "):\n";
//		for (int i = 0; i < size; i++)
//			cout << "B[" << i << "] = " << *(B + i) << endl;
//	}
//
//	else if (cA < cB) {
//		cout << "\nArray B[]: (" << cB << " elements less than t = " << t << "):\n";
//		for (int i = 0; i < size; i++)
//			cout << "B[" << i << "] = " << *(B + i) << endl;
//		cout << "\nArray A[] (" << cA << " elements less than t = " << t << "):\n";
//		for (int i = 0; i < size; i++)
//			cout << "A[" << i << "] = " << *(A + i) << endl;
//	}
//
//	else if (cA == cB) cout << "\nArrays have the same number of elements less than t.";
//
//	else cout << "\nError.";
//}



//Variant 4

//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	const int N = 100;
//	int u = 0, i, X[N], Y[N], T[N];
//	int j, n, * px, ct = 0, k;
//	cout << "Введите размер последовательности X: ";
//	cin >> n;
//	cout << "Введите размер последовательности Y: ";
//	cin >> k;
//	cout << "X последовательность: ";
//	for (i = 0; i < n; i++)
//	{
//		X[i] = i + 1;
//		cout << X[i] << " ";
//	}
//	cout << endl;
//	cout << "Y последовательность: ";
//	for (i = 0; i < k; i++)
//	{
//		Y[i] = i * 2;
//		cout << Y[i] << " ";
//	}
//	cout << endl;
//	for (i = 0; i < n; i++) {
//		px = &X[i];
//		for (j = 0; j < n; j++) {
//			if (*px == Y[j]) {
//				T[ct] = *px;
//				ct++;
//			}
//		}
//	}
//	cout << "Максимальная последовательность длиной " << ct << " элементов: ";
//	for (i = 0; i < ct; i++)
//		cout << T[i] << " ";
//	cout << endl;
//}


//Dop


//11. Вводится последовательность из n натуральных чисел.Необходимо
//определить наименьшее натуральное число, отсутствующее в последовательности.

//int main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//	int number, min;
//	cout << "Введите размер массива ";
//	cin >> number;
//	int* arr = new int[number];
//
//	for (int i = 0; i < number; i++)
//	{
//		cin >> arr[i];
//
//	}
//	cout << endl;
//
//	system("cls");
//
//	for (int i = 0; i < number; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	min = arr[0];
//
//	for (int i = 0; i < number; i++)
//	{
//		if (min >= arr[i])
//		{
//			min = arr[i] + 1;
//		}
//	}
//	cout << endl << "Наименьшее число не входящее в последовательность = " << min << endl;
//}



//12 Заданы два массива A и B, каждый из n элементов. 
//Подсчитать количество таких k, для которых: A[k] = B[k], A[k] > B[k] и A[k] < B[k].

//int main()
//{
//	setlocale(LC_CTYPE, "ru");
//	int A[11] = { 4,1,6,7,8,1,5,7,4,2,6 }, B[11] = { 4,7,5,4,8,2,5,7,7,2,2 }, b = 0, m = 0, r = 0, i;
//	for (i = 0; i < 10; i++)
//	{
//		if (*(A + i) == *(B + i))
//			r++;
//		if (*(A + i) > * (B + i))
//			b++;
//		if (*(A + i) < *(B + i))
//			m++;
//	}
//	cout << "Количество элементов где A[k]>B[k] = " << b << endl << "Количество элементов где А[k]=B[k] = " << r << endl << "Количество элементов где А[k]<B[k] = " << m;
//}



//13 Дан массив x, содержащий n элементов.
//Найти количество различных чисел среди элементов этого масси-ва.

int main()
{
    setlocale(LC_ALL, "ru");
    int i, sz, x[100], r = 0, j;
    cout << "Введите размер массива: ";
    cin >> sz;
    cout << "Массив X:" << endl;
    srand((unsigned)time(NULL));
    for (i = 0; i < sz; i++)
    {
        x[i] = rand() % 99;
        cout << x[i] << endl;
    }
    for (i = 0; i < sz; i++)
    {
        for (j = 0; j < sz; j++)
        {
            if (*(x + i) == *(x + j))
                r++;
        }

    }
    i = r - i;
    cout << "Количество одинаковых элементов = " << i << endl;
    cout << "Количество различных элементов = " << sz - i;
}