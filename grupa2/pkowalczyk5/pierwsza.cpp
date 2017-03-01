#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //deklaracje
    int n;
    bool czy_zlozona = 0;

    //input i sprawdzenie poprawnosci
    cout << "Wprowadz liczbe: ";

    cin >> n;

    if (n < 2 || n > 1000000)
    {
        cout << "Liczba poza zakresem";
        return 0;
    }

    //glowna petla
    for (int i = 2; i <= sqrt(n); i++) //powyzej ceiling(n/2) nie ma sensu liczyc
    {
        if (czy_zlozona == 1) break; //wychodzimy jesli juz wiadomo, ze zlozona

        if (n%i == 0) czy_zlozona = 1;
    }

    //output
    if (czy_zlozona == 1)
        cout << "zlozona";
    else
        cout << "pierwsza";

    return 0;
}
