#include <iostream>

int main()
{
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if ((x1 - 1 == x2 || x2 - 1 == x1) && (y1 - 1 == y2 || y2 - 1 == y1)) std::cout << "YES";
    else std::cout << "NO";
}