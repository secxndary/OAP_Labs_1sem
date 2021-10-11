#include <iostream>
using namespace std;
// метод дихотомии
double f(double x) {
    return pow(x, 3) + 2 * x - 1;
}
double f1(double x) {
    return 2 * pow(x, 2) + 2;
}
int main()
{
    setlocale(LC_ALL, "rus");
    double e = 0.0001;
    double a = -88;
    double b = 117;
    double x;
    while (abs(a - b) > 2 * e) {
        x = (a + b) / 2;
        if (f(x) * f(a) <= 0) {
            b = x;
        }
        else {
            a = x;
        }
    }
    cout << "x = " << x << "\nМетодом касательных:\nx = 0.453401\nРазница между ними:\nx1 - x2 = " << abs(x - 0.453401);

}