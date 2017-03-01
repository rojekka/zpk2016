#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            std::cout << "zlozona" << std::endl;
            return 0;
        }
    }
    std::cout << "pierwsza" << std::endl;

    return 0;
}
