#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int minimum = 1000000000 + 1;
    int pre_min = 1000000000 + 1;

    while (n != 0)
    {
        if (n < minimum) {
            pre_min = minimum;
            minimum = n;
        }
        else if (n < pre_min) pre_min = n;
        std::cin >> n;
    }
    std::cout << pre_min;
}