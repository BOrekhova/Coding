#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    a = a + (d - a % d  + c) % d;

    for (int i=a; i<=b; i+=d) std::cout << i << ' ';
}