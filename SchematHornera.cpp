#include <iostream>
using namespace std;

int horner(int wsp[], int st, int x) {
    if (st == 0) {
        return wsp[0];
    }
    return x * horner(wsp, st - 1, x) + wsp[st];
}

int main() {
    int stopien, x;

    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;

    int* wspolczynnik = new int[stopien + 1];

    for (int i = 0; i <= stopien; i++) {
        cout << "Podaj wspolczynnik stojacy przy potedze " << stopien - i << ": ";
        cin >> wspolczynnik[i];
    }

    cout << "Podaj argument: ";
    cin >> x;

    int wynik = horner(wspolczynnik, stopien, x);

    cout << "W(" << x << ") = " << wynik << endl;

    delete[] wspolczynnik;

    return 0;
}