#include <iostream>
using namespace std;

void rozklad(int n) {
    cout << "Czynniki pierwsze: ";

    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    int i = 3;
    while (i * i <= n) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
        i += 2;
    }

    if (n > 1) {
        cout << n;
    }

    cout << endl;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    rozklad(liczba);

    return 0;
}
