
//Variant 15

//Task #1 (кратно ли число двум)

//#include <iostream>
//using namespace std;
//int main()
//{
//    setlocale(LC_CTYPE, "Russian");
//    int chislo;
//    float i, j;
//    char tmp[33];
//    cout << "Введите число: ";
//    cin >> chislo;
//
//    i = chislo / 2.;
//    cout << "Число при делении на 2: " << i << endl;
//    j = chislo >> 1;
//    cout << "Число при сдвиге вправо на 2: " << j << endl;
//    if (i == j) {
//        cout << "Число кратно 2" << endl;
//    }
//    else {
//        cout << "Число не кратно 2" << endl;
//    }
//    _itoa_s(chislo, tmp, 2);
//    cout << "Число в двоичной системе счисления: " << tmp << endl;
//}



//Task #2

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char tA[33];
    char tM[33];
    unsigned int A, B, mask, mask1, n, p, m, q;
    cout << "Введите число А: "; cin >> A;
    _itoa_s(A, tA, 2);
    cout << "Число А в двоичной системе: " << tA << endl;
    cout << "Введите р: "; cin >> p;
    cout << "Введите n: "; cin >> n;
    mask = (1u << n) - 1;
    mask <<= p;
    mask1 = ~mask;
    _itoa_s(mask1, tM, 2);
    cout << "Маска: " << tM;
    _itoa_s(A & mask1, tA, 2);
    cout << "\nИзменённое число: " << tA;
}