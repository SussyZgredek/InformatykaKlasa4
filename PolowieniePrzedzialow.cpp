#include <iostream>

using namespace std;

int main()
{
    float a = -10.0f;
    float b = 10.0f;
    float epsilon = 0.00001f;
    float srodek;
    float fa, fb, fs;

    fa = a * (a * (a - 3) + 2) - 6;
    fb = b * (b * (b - 3) + 2) - 6;

    if (fa == 0)
    {
        cout << "Znalezione miejsce zerowe wynosi: " << a << endl;
    }
    else if (fb == 0)
    {
        cout << "Znalezione miejsce zerowe wynosi: " << b << endl;
    }
    else
    {
        while (b - a > epsilon)
        {
            srodek = (a + b) / 2;
            fs = srodek * (srodek * (srodek - 3) + 2) - 6;
            fa = a * (a * (a - 3) + 2) - 6;

            if (fs == 0)
            {
                break;
            }

            if (fa * fs < 0)
            {
                b = srodek;
            }
            else
            {
                a = srodek;
            }
        }

        srodek = (a + b) / 2;

        cout << fixed << setprecision(5);
        cout << "Znalezione miejsce zerowe wynosi: " << srodek << endl;
    }

    return 0;
}