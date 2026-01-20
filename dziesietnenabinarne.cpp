#include <iostream>
using namespace std;

int main() {
    int liczba;
    int tab[31];
    int i = 0;

    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;

    int temp = liczba;

    while (temp != 0) {
        tab[i++] = temp % 2;
        temp = temp / 2;
    }

    cout << "Liczba " << liczba << " po zamianie na postac binarna: ";

    for (int j = i - 1; j >= 0; j--) {
        cout << tab[j];
    }

    cout << endl;
    return 0;
}