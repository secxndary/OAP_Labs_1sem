//#include <iostream>
//using namespace std;
//
//int main() {
//	// метод трапеций
//	int a = 1, b = 6, n = 200;
//	double x, h, s;
//	h = 0.025;
//	x = a;
//	s = 0;
//	while (x <= b - h) {
//		s += h * (1 + pow(x, 3) + 1 + pow(x + h, 3)) / 2;
//		x += h;
//	}
//	cout << s;
//}
//
//int main()
//{
//	// метод парабол
//	setlocale(LC_ALL, "ru");
//	int a = 1, b = 6, n = 200;
//	double x, h = 0.0125, s1 = 0, s2 = 0, z;
//	x = a;
//	for (int i = 1; i <= (2 * n - 1); i++) {
//		if (i % 2 != 0) {
//			s1 += (1 + pow(x, 3));
//			x += h;
//		}
//		else {
//			s2 += (1 + pow(x, 3));
//			x += h;
//		}
//	}
//	z = h / 3 * (1 + pow(a, 3) + 4 * s1 + 2 * s2 + 1 + pow(b, 3));
//	cout << "z = " << z << ".\nРезультат, полученный первым способом:\nz = 323.364.\nРазница между ними равна:\n" << z - 323.364 << ".";
//}
//
//
//// метод касательных 
//double f(double x) {
//	return pow(x, 3) + 2 * x - 1;
//}
//double f1(double x) {
//	return 2 * pow(x, 2) + 2;
//}
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	double x1;
//	double x = 0;
//	double e = 0.0001;
//	double a = 88;
//	double b = 117;
//	if (f(a) * f1(a) > 0)
//		x1 = a;
//	else
//		x1 = b;
//	while (abs(x1 - x) > e)
//	{
//		x = x1;
//		x1 = x - (f(x) / f1(x));
//	}
//	cout << "x = " << x1;
//}
//
//
//// метод дихотомии
//double f(double x) {
//	return pow(x, 3) + 2 * x - 1;
//}
//double f1(double x) {
//	return 2 * pow(x, 2) + 2;
//}
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	double e = 0.0001;
//	double a = -88;
//	double b = 117;
//	double x;
//	while (abs(a - b) > 2 * e) {
//		x = (a + b) / 2;
//		if (f(x) * f(a) <= 0) {
//			b = x;
//		}
//		else {
//			a = x;
//		}
//	}
//	cout << "x = " << x << "\nМетодом касательных:\nx = 0.453401\nРазница между ними:\nx1 - x2 = " << abs(x - 0.453401);
//
//}

#include <iostream>
#include <ctime>
using namespace std;

double equastion1(double x)
{
    return pow(x, 3) + 3;
}

double equastion12(double x)
{
    return pow(x, 2) + 4 * x + 2;
}

float  equastion2(float x)
{
    return pow(x, 3) - 1;
}

double EX1(double(*name)(double x))
{
    setlocale(LC_ALL, "ru");
    double e = 0.0001, a = 3, b = 6, x = a;
    while (abs(a - b) > 2 * e)
    {
        x = (a + b) / 2;
        if (name(x) * name(a) <= 0)
            b = x;
        else a = x;
        cout << x << endl;
    }
    return x;
}

double EX12(double(*f)(double x))
{
    setlocale(LC_ALL, "ru");
    double e = 0.0001, a = 0, b = 4, x;
    while (abs(a - b) > 2 * e)
    {
        x = (a + b) / 2;
        if (f(x) * f(a) <= 0)
            b = x;
        else a = x;
        cout << x << endl;
    }
    return x;
}

double EX2(float(*f)(float x))
{
    float a = 0, b = 3, n = 200, h, x, s;
    h = (b - a) / n, x = a, s = 0;
    while (x <= b - h)
    {
        s += h * (f(x) + f(x + h)) / 2, x += h;
        cout << s << endl;
    }
    return s;
}

void RandChar(char* star, const int size);
void ShowChar(char* star, const int size);
int DefineMaxSize(char* ing, const int SIZE);

///////////////////////////////////////////////

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    cout << "8 лаба";
    getchar();

    cout << "основа 1\n----------------------------------------\n";
    double z;
    z = EX1(equastion1);
    cout << "ответ: == " << z;
    getchar();
    cout << "\n2 доп 1\n-----------------------------------------\n";
    getchar();
    z = EX2(equastion2);
    cout << "ответ: == " << z;
    getchar();
    cout << "доп 2\n----------------------------------------\n";
    getchar();
    z = EX1(equastion12);
    cout << "ответ: == " << z;
    getchar();
    cout << "12 лаба";
    getchar();

    cout << "основа 1\n----------------------------------------\nвведите размерность массива, пожалуйста: ";
    int size, SIZE;
    cin >> size;
    char* str = new char[size];

    RandChar(str, size);
    ShowChar(str, size);
    getchar();

    cout << "\nдоп 3\n----------------------------------------\n";
    char ing[70];
    gets_s(ing);
    int max;
    SIZE = strlen(ing);

    max = DefineMaxSize(ing, SIZE);
    cout << "\nв самом большом слове " << max << " букв";
    delete[] str;
    getchar();
}

///////////////////////////////////////////////

void RandChar(char* star, const int size)
{
    for (int i = 0; i < size; i++)
    {
        star[i] = rand() % 26 + 94;
    }
}

void ShowChar(char* star, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (star[i] != 'b')
            cout << star[i];
    }
}

int DefineMaxSize(char* ing, const int SIZE)
{
    int count = 0, max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        count++;
        if (ing[i] == ' ' || ing[i] == ',' || ing[i] == '.')
            count = 0;
        if (count > max)
            max = count;
    }
    return max;
}