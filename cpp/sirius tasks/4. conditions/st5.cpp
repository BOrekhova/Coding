#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (a == 0) {
        if (b == 0) std::cout << "INF";
        else std::cout << "NO";
    }
    else {
        if (b % a == 0) std::cout << b / a * -1;
        else std::cout << "NO";
    }
}