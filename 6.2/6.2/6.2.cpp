#include <iostream>
using namespace std;

void main()
{
    int t = 0, a = 0, b = 0, c = 0, d = 0, r = 100;
    for (a; a <= 2; a++) {
        for (b; b <= 5; b++) {
            for (c; c <= 20; c++) {
                for (d; d <= 50; d++) {
                    if (r = (a * 50 + b * 20 + c * 5 + d * 2))
                        t++;
                }
            }
        }
    }
    cout << "Sposobov nabora: " << t;
}