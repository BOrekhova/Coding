#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int ans;

    if (n < 37) std::cout << n / 4 + 1;
    else if (n == 53 || n == 54) std::cout << 1;
    else if (n == 52 || n == 51) std::cout << 2;
    else if (n == 49 || n == 50) std::cout << 3;
    else if (n == 48 || n == 47) std::cout << 4;
    else if (n == 45 || n == 46) std::cout << 5;
    else if (n == 44 || n == 43) std::cout << 6;
    else if (n == 41 || n == 42) std::cout << 7;
    else if (n == 40 || n == 39) std::cout << 8;
    else if (n == 37 || n == 38) std::cout << 9;
}