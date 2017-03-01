#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    int zlozona = 0;
    cin >> n;
    for (int i = 2;  i * i <= n; i ++ ){
        if ( n % i == 0){
           zlozona = 1;
           break;
            }}
    if (zlozona == 1)
         cout << "zlozona";
        else
             cout << "pierwsza"<< endl;

return 0;
}
