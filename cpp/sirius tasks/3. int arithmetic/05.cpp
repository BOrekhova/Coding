#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int hours = n / 60;
    int mins = n % 60;
    std::cout << hours << ' ' << mins;
}