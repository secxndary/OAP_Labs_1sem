#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	const int N = 100;
	int i, sz, A[N], k;
	int rmn = 0, rmx = 99, j = 0;
	cout << "Введите размер массива: ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}
	cout << "\nВведите элемент, который хотите удалить: ";
	cin >> k;
	for (i = 0; i < sz; i++)
	{
		if (A[i] != k) {
			A[j++] = A[i];
		}
		cout << A[j] << " ";
	}
	/*for (i = 0; i < sz - 1; i++) {
		if (i % 2 == 1) {
			A[i] = 1;
			A[i] = A[i + 1];
			cout << A[i] << endl;
		}
	}*/
}
