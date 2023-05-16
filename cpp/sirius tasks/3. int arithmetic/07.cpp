#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int days = m / n + (m % n)/(m % n - 1);
    std::cout << days;
}