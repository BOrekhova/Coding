#include <iostream>

int main()
{
    int n, p, y, cnt = 0;
    std::cin >> n >> p >> y;

    n = n * 100;
    y = y * 100;
    p = p + 100;

    while (n < y)
    {
        n = (n * p) / 100;
       cnt++;
    }

    std::cout << cnt;
}