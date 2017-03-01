#include <iostream>

using namespace std;

bool pierwsza(int a) {
    int d;
    d=2;
    while(d<a) {
        if(a%d==0)
            return false;
        d++;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if(pierwsza(n))
        cout << "pierwsza";
    else
        cout << "zlozona";
}
