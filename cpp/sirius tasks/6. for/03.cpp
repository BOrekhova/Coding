#include <iostream>

int main()
{
    int n;
    long long cnt = 1;
    std::cin >> n;

    for (int i=1; i<=n; i+=1) cnt *= i;

    std::cout << cnt;
}