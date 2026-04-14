#include <iostream>
using namespace std;

int tabPomocnicza[100];

void Merge(int tab[], int lewy, int srodek, int prawy)
{
    int indeksLewej = lewy;
    int indeksPrawej = srodek + 1;
    int indeksPomocniczy = lewy;

    while (indeksLewej <= srodek && indeksPrawej <= prawy)
    {
        if (tab[indeksLewej] <= tab[indeksPrawej])
        {
            tabPomocnicza[indeksPomocniczy] = tab[indeksLewej];
            indeksLewej++;
        }
        else
        {
            tabPomocnicza[indeksPomocniczy] = tab[indeksPrawej];
            indeksPrawej++;
        }

        indeksPomocniczy++;
    }

    while (indeksLewej <= srodek)
    {
        tabPomocnicza[indeksPomocniczy] = tab[indeksLewej];
        indeksLewej++;
        indeksPomocniczy++;
    }

    while (indeksPrawej <= prawy)
    {
        tabPomocnicza[indeksPomocniczy] = tab[indeksPrawej];
        indeksPrawej++;
        indeksPomocniczy++;
    }

    for (int indeks = lewy; indeks <= prawy; indeks++)
    {
        tab[indeks] = tabPomocnicza[indeks];
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
    int liczbaElementow;
    int tab[100];

    cout << "Podaj liczbe elementow: ";
    cin >> liczbaElementow;

    for (int indeks = 0; indeks < liczbaElementow; indeks++)
    {
        cout << "Podaj element " << indeks + 1 << ": ";
        cin >> tab[indeks];
    }

    cout << endl;
    cout << "Tablica przed sortowaniem:" << endl;
    for (int indeks = 0; indeks < liczbaElementow; indeks++)
    {
        cout << tab[indeks] << " ";
    }

    MergeSort(tab, 0, liczbaElementow - 1);

    cout << endl;
    cout << "Tablica po sortowaniu:" << endl;
    for (int indeks = 0; indeks < liczbaElementow; indeks++)
    {
        cout << tab[indeks] << " ";
    }

    return 0;
}
