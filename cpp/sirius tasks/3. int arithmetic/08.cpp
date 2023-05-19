#include <iostream>

int main()
{
    int k, n;
    std::cin >> k >> n;
    std::cout << (n - 1) / k + 1 << ' ' << (n - 1) % k + 1;
}