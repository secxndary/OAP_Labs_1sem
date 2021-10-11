#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int n;
	double p, s;
	cout << "Enter n:\n";
	cin >> n;
	cout << "Enter s:\n";
	cin >> s;
	cout << "Enter p:\n";
	cin >> p;
	p = p / 100;
	double sum = s;
	for (int i = 0; i < n - 1; i++)
	{
		s = s - (p * s);
		sum += s;
	}
	cout << "Sum = " << sum;
}
