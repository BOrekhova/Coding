#include <iostream>

int main()
{
    int n, cnt = 0;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        int num;
        std::cin >> num;
        if (num == 0) cnt += 1;
    }

    std::cout << cnt;
}