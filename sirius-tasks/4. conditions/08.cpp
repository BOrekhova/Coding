#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (b > a) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (c > b) {
        c = c + b;
        b = c - b;
        c = c - b;
    }
    if (b > a) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    std::cout << c << ' ' << b << ' ' << a;
}