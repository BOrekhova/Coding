#include <iostream>
#include <vector>

int main()
{
    int n, num;
    std::cin >> n;
    std::vector<int> v;

    for (int i=0; i<n; i++) {
        std::cin >> num;
        v.push_back(num);
    }

    for (int i=0; i<n; i++) {
        if (v[i] % 2 == 0) std::cout << v[i] << ' ';
    }
}