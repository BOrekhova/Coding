#include <iostream>

int main()
{
    int a, b, c, cnt = 0;
    std::cin >> a >> b >> c;

    if (a == b) cnt += 1;
    if (a == c) cnt += 1;
    if (b == c) cnt += 1;
    
    if (cnt == 1) std::cout << 2;
    else std::cout << cnt;    
}