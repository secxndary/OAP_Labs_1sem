#include <iostream>
using namespace std;

int main() {
	int a = 1, b = 6, n = 200;
	double x, h, s;
	h = 0.025;
	x = a;
	s = 0;
	while (x <= b - h) {
 		s += h * (1 + pow(x, 3) + 1 + pow(x + h, 3)) / 2;
		x += h;
	}
	cout << s;
}