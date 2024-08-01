#include <iostream>

int main()
{
    int n;
    int cnt_f = 0;
    long long cnt = 1;
    std::cin >> n;

    for (int i=1; i<=n; i+=1) {
        cnt *= i;
        cnt_f += cnt;
    }
    std::cout << cnt_f;
}