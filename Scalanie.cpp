#include <iostream>
using namespace std;

int pomoc[100];

void Merge(int tab[], int lewy, int srodek, int prawy)
{
    int i = lewy;
    int j = srodek + 1;
    int k = lewy;

    while (i <= srodek && j <= prawy)
    {
        if (tab[i] <= tab[j])
        {
            pomoc[k] = tab[i];
            i++;
        }
        else
        {
            pomoc[k] = tab[j];
            j++;
        }
        k++;
    }

    while (i <= srodek)
    {
        pomoc[k] = tab[i];
        i++;
        k++;
    }

    while (j <= prawy)
    {
        pomoc[k] = tab[j];
        j++;
        k++;
    }

    for (int x = lewy; x <= prawy; x++)
    {
        tab[x] = pomoc[x];
    }
}

void MergeSort(int tab[], int lewy, int prawy)
{
    if (lewy < prawy)
    {
        int srodek = (lewy + prawy) / 2;

        MergeSort(tab, lewy, srodek);
        MergeSort(tab, srodek + 1, prawy);
        Merge(tab, lewy, srodek, prawy);
    }
}

int main()
{
    int n;
    int tab[100];

    cout << "Podaj liczbe elementow: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Podaj element " << i + 1 << ": ";
        cin >> tab[i];
    }

    cout << endl;
    cout << "Tablica przed sortowaniem:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }

    MergeSort(tab, 0, n - 1);

    cout << endl;
    cout << "Tablica po sortowaniu:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }

    return 0;
}