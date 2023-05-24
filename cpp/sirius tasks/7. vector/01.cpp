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

    for (int i=0; i<n; i+=2) {
        std::cout << v[i] << ' ';
    }
}