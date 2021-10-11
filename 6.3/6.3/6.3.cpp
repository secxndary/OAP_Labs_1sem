#include <iostream>
using namespace std;



void StopIfWork(int a) {
	int const size = 4;
	int arr[size];
	int sum = 0;
	int a1 = a;
	if (a % 7 == 0 && a % 2 == 0 && a % 11 == 0)
	{

		for (int i = 0; i < size; ++i)
		{
			arr[i] = a % 10;
			a /= 10;
		}
		for (int i = 0; i < size; ++i)
			sum += arr[i];
		if (sum == 30)
			cout << a1 << endl;
	}

}

void main() {
	for (int i = 1000; i < 10000; ++i)
	{
		StopIfWork(i);
	}
}