//
//#include <iostream>
//#include <time.h>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	const int W = 100;
//	int i, rm, A[W], b[W], bIndex = 0, min = 100, max = 0, iMin = 0, iMax = 0, first, second;
//	cout << "Введите размер массива:" << endl;
//	cin >> rm;
//	cout << "Массив A: " << endl;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < rm; i++)
//	{
//		A[i] = rand() % 99;
//		cout << A[i] << " ";
//	}
//	for (i = 0; i < rm; i++) {
//		if (A[iMin] > A[i])
//			iMin = i;
//		if (A[iMax] < A[i])
//			iMax = i;
//	}
//	if (iMin < iMax)
//	{
//		first = iMin;
//		second = iMax;
//	}
//	else
//	{
//		first = iMax;
//		second = iMin;
//	}
//	for (int i = 0; i < first; i++)
//		b[bIndex++] = A[i];
//	for (int i = second; i >= first; i--)
//		b[bIndex++] = A[i];
//	for (int i = second + 1; i < W; i++)
//		b[bIndex++] = A[i];
//
//	for (int i = 0; i < W; i++)
//		cout << b[i] << " ";
//}
//

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    const int N = 100;
    int a[N], b[N], iMin = 0, iMax = 0, first, second, bIndex = 0;
    for (int i = 1; i < N; i++)
    {
        if (a[iMin] > a[i])
            iMin = i;
        if (a[iMax] < a[i])
            iMax = i;
    }
    if (iMin < iMax)
    {
        first = iMin;
        second = iMax;
    }
    else
    {
        first = iMax;
        second = iMin;
    }
    for (int i = 0; i < first; i++)
        b[bIndex++] = a[i];
    for (int i = second; i >= first; i--)
        b[bIndex++] = a[i];
    for (int i = second + 1; i < N; i++)
        b[bIndex++] = a[i];

    for (int i = 0; i < N; i++)
        cout << b[i] << " ";
}