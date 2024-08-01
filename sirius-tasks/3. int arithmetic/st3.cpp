#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int n1 = n / 1000;
    int n2 = n / 100 % 10;
    int n3 = n / 10 % 10;
    int n4 = n % 10;
    int le = n1*10 + n2;
    int ri = n4*10 + n3;
    std::cout << le - ri + 1;
}