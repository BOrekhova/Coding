#include <iostream>

int main()
{
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if ((a <= d && b <= e) || (a <= e && b <= d)) std::cout << "YES";
    else if ((a <= d && c <= e) || (a <= e && c <= d)) std::cout << "YES";
    else if ((b <= d && c <= e) || (b <= e && c <= d)) std::cout << "YES";
    else std::cout << "NO";
}