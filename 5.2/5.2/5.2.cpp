

#include <iostream>
using namespace std;

int main()
{
    float q, p;
    int i = 1;
    float j = 0.03;
    cout << "Enter q: " << endl;
    cin >> q;
    cout << "Enter p: " << endl;
    cin >> p;
    while (q > p)
    {
        p += (p * j);
        j += 0.03;
        i++;
    }
    cout << "Firma poluchila: " << p << endl;
    cout << "Potrebovalos vremeni: " << i;
}

