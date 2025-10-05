#include <iostream>
using namespace std;

int main() {

    int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    int szukana;
    cout << "Podaj liczbe ktora chcesz znalezc: ";
    cin >> szukana;

    int l = 0;
    int p = 14;
    int sr;

    while (l <= p) {
        sr = (l + p) / 2;

        if (tab[sr] == szukana) {
            cout << "Liczba " << szukana
                 << " wystepuje w zbiorze w komorce o indeksie: "
                 << sr << endl;
            return 0;
        }

        if (tab[sr] > szukana) {
            p = sr - 1;
        } else {
            l = sr + 1;
        }
    }

    cout << "Liczba " << szukana << " nie wystepuje w zbiorze." << endl;
    return 0;
}
