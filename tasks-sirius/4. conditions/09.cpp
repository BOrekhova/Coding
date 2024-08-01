#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    if (n % 10 == 1 && n % 100 != 11) std::cout << n << " bochka";
    else if (n % 10 == 2 && n % 100 != 12) std::cout << n << " bochki";
    else if (n % 10 == 3 && n % 100 != 13) std::cout << n << " bochki";
    else if (n % 10 == 4 && n % 100 != 14) std::cout << n << " bochki";
    else std::cout << n << " bochek";
}