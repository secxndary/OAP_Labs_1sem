//void main()
//{
// setlocale(LC_CTYPE, "Russian");
// char tmp[33];
// int A, B, maskA = 48;
// int maskB = ~maskA ;
// cout << "Enter a: ";
// cin >> A;
// cout << "Enter b: ";
// cin >> B;
//
// _itoa_s(A, tmp, 2);
// cout << "A = " << tmp << endl;
// _itoa_s(B, tmp, 2);
// cout << "B = " << tmp << endl;
// _itoa_s(maskA, tmp, 2);
// cout << "Mask for A: " << tmp << endl;
// _itoa_s(A & maskA, tmp, 2);
// cout << "Selected bits A: " << tmp << endl;
// _itoa_s(maskB, tmp, 2);
// cout << "Mask for B: " << tmp << endl;
// _itoa_s(B & maskB, tmp, 2);
// cout << " Cleared bits in B: " << tmp << endl;
// _itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
// cout << " Result B = " << tmp << endl;
//}


//1. Ввести целое число A. Извлечь 2 бита числа A, начиная с пятого и вставить их в число B, начиная также с пятого бита.

//#include <iostream>
//using namespace std;
//int main()
//{
//	unsigned int a, b, n, p, maskA, maskB;
//	char tA[33], tB[33], tMA[33], tMB[33], bits[33];
//	cout << "Enter a: ";
//	cin >> a;
//	_itoa_s(a, tA, 2);
//	cout << "Binary a: " << tA;
//	cout << "\nEnter b: ";
//	cin >> b;
//	_itoa_s(b, tB, 2);
//	cout << "Binary b: " << tB;
//	maskA = 96;
//	_itoa_s(maskA, tMA, 2);
//	cout << "\nMask A: " << tMA;
//	maskB = ~maskA;
//	_itoa_s(maskB, tMB, 2);
//	cout << "\nMask B: " << tMB;
//	_itoa_s(a & maskA, bits, 2);
//	cout << "\nSelected bits: " << bits;
//	_itoa_s(b & maskB, tMB, 2);
//	cout << "\nCleared b: " << tMB;
//	_itoa_s((a & maskA) | (b & maskB), tB, 2);
//	cout << "\nNew number b: " << tB;
//	_itoa_s(b, tB, 2);
//	cout << "\nOld number b: " << tB;
//}

	//2. Инвертировать в 1 в числе А n битов влево от позиции p.

#include <iostream>
using namespace std;
int main()
{
	unsigned int a, n, p, mask;
	char tA[33];
	char tM[33];
	cout << "Enter a: ";
	cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Binary a: " << tA << "\nEnter number: ";
	cin >> n;
	cout << "Enter position: ";
	cin >> p;
	mask = (1u << n) - 1;
	mask <<= p;
	_itoa_s(mask, tM, 2);
	cout << "Mask: " << tM;
	a |= mask;
	_itoa_s(a, tA, 2);
	cout << "\nChanged a: " << tA;
}