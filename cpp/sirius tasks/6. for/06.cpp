#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int m = a % 2;
    a += m;

    for (int i=a; i<=b; i+=2) std::cout << i << ' ';
}