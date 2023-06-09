#include <iostream>

int main()
{
    int now, cnt = 0;
    std::cin >> now;
    int prev = now;

    while (now != 0)
    {
        if (now > prev) cnt += 1;
        prev = now;
        std::cin >> now;
    }
    std::cout << cnt;
}