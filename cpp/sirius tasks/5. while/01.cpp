#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    while (n % 13 != 0) {
        std::cout << n << std::endl;
        n++;
    }
}