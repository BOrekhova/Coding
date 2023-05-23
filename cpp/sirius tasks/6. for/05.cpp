#include <iostream>

int main()
{
    long long n;
    std::cin >> n;

    for (int i=0, y=1; i<10; i++, y*=10) {
        if (i == 0) std::cout << n % 10 << ' ';
        else std::cout << (n / y) % 10 << ' '; 
    }
}