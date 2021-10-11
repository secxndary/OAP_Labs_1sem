#include<iostream>
#include<conio.h>
using namespace std;
// метод касательных 
double f(double x) {
    return pow(x, 3) + 2 * x - 1;
}
double f1(double x) {
    return 2 * pow(x, 2) + 2;
}
int main()
{
    setlocale(LC_ALL, "rus");
    double x1;
    double x = 0;
    double e = 0.0001;
    double a = 88;
    double b = 117;
    if (f(a) * f1(a) > 0)
        x1 = a;
    else
        x1 = b;
    while (abs(x1 - x) > e)
    {
        x = x1;
        x1 = x - (f(x) / f1(x));
    }
    cout <<"x = "<< x1;
}


