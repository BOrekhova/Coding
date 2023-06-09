#include <iostream>

int main()
{
    float n;
    float cnt = 0.0, sum = 0.0;
    std::cin >> n;

    while (n != 0)
    {
        sum += n;
        cnt += 1;

        std::cin >> n;
    }
    std::cout << sum / cnt;
}