#include <iostream>
using namespace std;

int main()
{
    float a = -10;
    float b = 10;
    float epsilon = 0.00001;
    float srodek;

    while (b - a > epsilon)
    {
        srodek = (a + b) / 2;

        if ((a * (a * (a - 3) + 2) - 6) * (srodek * (srodek * (srodek - 3) + 2) - 6) < 0)
        {
            b = srodek;
        }
        else
        {
            a = srodek;
        }
    }

    srodek = (a + b) / 2;

    cout << "Znalezione miejsce zerowe wynosi: " << srodek << endl;

    return 0;
}
