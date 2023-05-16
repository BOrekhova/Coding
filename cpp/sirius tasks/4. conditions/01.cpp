#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n % 2 == 0) std::cout << n / 2;
    else std::cout << n;
}