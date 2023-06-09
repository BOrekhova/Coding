#include <iostream>
#include <vector>

int main()
{
    int n, num;
    int max = -21;
    int min = 21;
    int sum = 0;
    int max_i, min_i;
    int cnt = 1;
    std::cin >> n;
    std::vector<int> v;

    for (int i=0; i<n; i++) {
        std::cin >> num;
        if (num > 0) sum += num;
        v.push_back(num);
    }

    for (int i=0; i<n; i++) {
        if (v[i] > max) { max = v[i]; max_i = i; }
        if (v[i] < min) { min = v[i]; min_i = i; }
    }

    for (int i=min_i+1; i<max_i; i++) cnt *= v[i];

    std::cout << sum << ' ' << cnt;
}