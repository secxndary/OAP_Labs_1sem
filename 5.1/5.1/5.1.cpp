#include <iostream>
using namespace std;
//zadacha 7


int main()
{
    int k, o, t, i, j, l, kot, tok;
    k = 0; o = 0; t = 0;
    kot = 100 * k + 10 * o + t;
    tok = 100 * t + 10 * o + k;
    for (int i = k; i < 10; i++)
    {
        for (int j = o; j < 10; j++)
        {
            for (int l = t; l < 10; l++)
            {
                if ((i * 100 + j * 10 + l) + (i * 100 + l * 10 + j) == (l * 100 + j * 10 + i))
                {
                    cout << "Answer is: " << i * 100 + j * 10 + l << " + " << i * 100 + l * 10 + j << " = " << l * 100 + j * 10 + i << endl;
                }
            }
        }
    }
}