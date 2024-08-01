#include <iostream>

int main()
{
    int n, m, x, y;
    std::cin >> n >> m >> x >> y;

    if (n > m) {
        n = n + m;
        m = n - m;
        n = n - m;
    }

    if (x > n - x) x = n - x;
    if (y > m - y) y = m - y;

    if (x < y) std::cout << x;
    else std::cout << y;
}