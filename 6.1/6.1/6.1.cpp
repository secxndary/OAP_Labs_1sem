#include <iostream>
using namespace std;

int main()
{
	int a, e, d, s;
	for (a = 100; a <= 999; a++) {
		e = a % 10;
		d = a / 10 % 10;
		s = a / 100 % 10;
		float n = sqrt(a);
		if (e > d > s) {
			float end = sqrt((float)n);
			for (int i = 2; i <= end; ++i) {
				if ((int)n % i == 0) {
					cout << "Не простое" << endl;
					return 0;
				}
			}
			cout << "Простое" << endl;
		}
		}
	}
