#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b) b = a;
    if (b > c) c = b;
    std::cout << c;
}