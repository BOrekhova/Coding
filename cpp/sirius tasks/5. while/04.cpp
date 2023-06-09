#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    if (n % 2 == 0) std::cout << 2;
    else {
        int i = 3;
        while (n % i != 0 && i*i <= n) {
            i += 2;
        }
        if (i*i <= n) std::cout << i;
        else std::cout << n;
    }
}