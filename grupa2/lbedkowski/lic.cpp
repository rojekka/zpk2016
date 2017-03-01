#include <iostream>

using namespace std;


int main()
{
    int liczba;
    cin >> liczba;


    int i=2;

    while(liczba%i != 0){
        i++;
    }

    if(i==liczba){
        cout << "pierwsza";
    }else{
        cout << "niepierwsza";}

    return 0;
}

