#include <iostream>

int main()
{
    int n, p, y, cnt = 0;
    std::cin >> n >> p >> y;

    while (n < y) {
        n = n + (n / 100 * p);
        cnt++;
    }
    std::cout << cnt;
}