#include <iostream>
using namespace std;

int main()
{
    int stopien;
    int x;
    int wsp[100];
    int wynik;

    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;

    for (int i = 0; i <= stopien; i++)
    {
        cout << "Podaj wspolczynnik stojacy przy potedze " << stopien - i << ": ";
        cin >> wsp[i];
    }

    cout << "Podaj argument: ";
    cin >> x;

    wynik = wsp[0];

    for (int i = 1; i <= stopien; i++)
    {
        wynik = wynik * x + wsp[i];
    }

    cout << "W(" << x << ") = " << wynik << endl;

    return 0;
}
