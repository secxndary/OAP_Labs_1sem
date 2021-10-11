#include <iostream>
#include <Windows.h>
using namespace std;

//Dop 11 variant


//11.1

//void main()
//{
// setlocale(LC_ALL, "Russian");
// int A, i; char tmp[33];
// cout << "Введите число: ";
// cin >> A;
// _itoa_s(A, tmp, 2);
// cout << "Число в двоичном виде: " << tmp << endl;
// if ((A & 15) == 0)
// cout << "Число кратно 16" << endl;
// else
// cout << "Число не кратно 16" << endl;
//}



//11.2

void main() {
setlocale(LC_CTYPE, "Russian");
 char tmp[33];
 int A, B, MaskA = 0, MaskB = 0, n, p, m, q;
 cout << "Введите n: "; cin >> n;
 cout << "Введите р: "; cin >> p;
 cout << "Введите число А: "; cin >> A;
 _itoa_s(A, tmp, 2);
 cout << "Число А в двоичной системе: " << tmp << endl;
 for (int i = p - 1; i < n + p - 1; i++)
	MaskA += pow(2, i);
 _itoa_s(MaskA, tmp, 2);
 MaskA >>= p - 1;
 cout << "Маска в двоичной системе: " << tmp << endl;
 _itoa_s(A & ~MaskA, tmp, 2);
 cout << "Измененное A: " << tmp << endl;
 cout << "Введите m: "; cin >> m;
 cout << "Введите q: "; cin >> q;
 for (int k = q - 1; k < m + q - 1; k++)
	 MaskB += pow(2, k);
 _itoa_s(MaskB, tmp, 2);
 cout << "Маска в двоичной системе: " << tmp << endl;
 cout << "Введите число B: "; cin >> B;
 _itoa_s(A, tmp, 2);
 cout << "Число B в двоичной системе: " << tmp << endl;
 MaskB >>= q - 1;
 _itoa_s(B & ~MaskB, tmp, 2);
 cout << "Измененное B: " << tmp << endl;
}