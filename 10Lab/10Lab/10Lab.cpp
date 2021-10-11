//#include <iostream>
//using namespace std;
//
//unsigned int invert(unsigned int a) {
//    unsigned int shift = (unsigned int)log2(a) + 1u;
//    return (shift == 32) ? ~a : (~a & ((1u << shift) - 1u));
//}
//
//int main()
//{
//    unsigned int a,b;
//    char tempA[33];
//    char tempB[33];
//    cout << "Enter number:\n";
//    cin >> a;
//    _itoa_s(a, tempA, 2);
//    cout << "2 c/c number: " << tempA << "\n";
//    /*const unsigned int mask = 11111111;*/  /*000000000000000000111111111111100;*/
//    /*for (int i = 1; i <= 13; i++) {
//        a ^= mask;
//    }*/
//    /*a ^= mask;*/
//    string str = string(tempA);
//    char sym;
//    sym = str.at(0); // sym получает значение первого элемента строки
//    _itoa_s(invert(a), tempB, 2);
//    cout << "Inverted number: " <<str<<"\n";
//}
//

#include <iostream>
using namespace std;

//Variant 3

//int main()
//{	

	//Task #1 (version 1.0)

	//unsigned int x, y;
	//char tY[33], tX[33];
	//cin >> x;
	//y = (x & 229379) | (~x & 32764);
	//_itoa_s(x, tX, 2);
	//_itoa_s(y, tY, 2);
	//cout << "Binary number: " << tX << "\nInverted number = " << tY;

	//Task #1 (version 2.0)

	//unsigned a;
	//char tA[33], tM[33];
	//cout << "Enter number: ";
	//cin >> a;
	//_itoa_s(a, tA, 2);
	//cout << "Binary number:   " << tA << endl;
	//unsigned mask = (1u << 13) - 1;
	//mask <<= 2;
	//_itoa_s(mask, tM, 2);
	//cout << "Mask: " << tM << endl;
	//a ^= mask;
	//_itoa_s(a, tA, 2);
	//cout << "Inverted number: " << tA;

	//Task #2

	//unsigned a, p, n, bits, m, b, q, c;
	//char tA[33], tM[33], tB[33], tBit[33], tMB[33], tC[33];
	//cout << "Enter number a: ";
	//cin >> a;
	//_itoa_s(a, tA, 2);
	//cout << "Binary number a:  " << tA << endl;
	//cout << "Enter p (position): ";
	//cin >> p;
	//cout << "Enter n (number): ";
	//cin >> n;
	//unsigned mask = (1u << n) - 1;  // 1u = 00000000000001; (1u << n) = 000000001000000 (n - 1 нулей справа от 1); (1u << n) - 1 = 000000001111111 (просто n единиц)
	//mask <<= p;                     //сдвигаем маску на p влево так как нужно получить n битов с позиции р
	//_itoa_s(mask, tM, 2);
	//cout << "Mask A: " << tM << endl;
	//a ^= mask;                      // xor ^ инвертирует биты которые в маске равны 1
	//_itoa_s(a, tA, 2);
	//cout << "Inverted number:  " << tA << endl;
	//bits = a;
	//bits >>= p;                     //сдвигаем обратно на р уже вправо чтобы получить в самом начале наши инвертированные биты
	//cout << "Enter m: ";
	//cin >> m;
	//bits <<= (32 - m );             //таким образом мы записываем в переменную bits только 
	//bits >>= (32 - m );             //наши инвертированные биты (m битов т.к. так надо по условию)
	//_itoa_s(bits, tBit, 2);
	//cout << "Inverted "<<m<<" bits: " << tBit << "\nEnter number b: ";
	//cin >> b;
	//_itoa_s(b, tB, 2);
	//cout << "Binary number b:  " << tB << "\nEnter position q: ";
	//cin >> q;
	//bits <<= q;                     //сдвигаем влево на q т.к. надо вставить биты bits с позиции q
	//c = b;
	//c ^= bits;						// ф-ия xor ^= заменяет m битов в b с позиции q нашими битами bits из числа а
	//_itoa_s(c, tC, 2);
	//cout << "Changed number b: " << tC;

//}

	
	//Variant 4

	//Task #1

//void main()
//{
//	setlocale(LC_ALL, "Russian");
//	int A, i; char tmp[33];
//	cout << "Введите число: ";
//	cin >> A;
//	_itoa_s(A, tmp, 2);
//	cout << "Число в двоичном виде: " << tmp << endl;
//	if ((A & 3) == 0)
//		cout << "Число кратно 4." << endl;
//	else
//		cout << "Число не кратно 4." << endl;
//}

	//Task #2 (version 1.0)

//void main() {
//	setlocale(LC_CTYPE, "Russian");
//	char tmp[33];
//	int A, B, MaskA = 0, n, p;
//	cout << "Введите n: "; cin >> n;
//	cout << "Введите p: "; cin >> p;
//	cout << "Введите число А: "; cin >> A;
//	 _itoa_s(A, tmp, 2);
//	 cout << "Число А в двоичной системе: " << tmp << endl;
//	 for (int i = p - 1; i < n + p - 1; i++)
//		MaskA += pow(2, i);
//	 _itoa_s(MaskA, tmp, 2);
//	cout << "Маска в двоичной системе: " << tmp << endl;
//	 MaskA >>= p - 2;
//	 _itoa_s(A & ~MaskA, tmp, 2);
//	 cout << "Измененное A: " << tmp << endl;
//}





	//Task #2 (version 2.0) (инвертировать в 1 n битов)

int main() 
{
	unsigned int a, n, p, mask;
	char tA[33];
	char tM[33];
	cout << "Enter a: ";
	cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Binary a: "<<tA<<"\nEnter number: ";
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