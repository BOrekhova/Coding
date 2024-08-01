#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a > b) std::cout << 1;
    else if (b > a) std::cout << 2;
    else std::cout << 0;
}