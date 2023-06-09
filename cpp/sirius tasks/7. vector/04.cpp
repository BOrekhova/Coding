#include <iostream>
#include <vector>

int main()
{
    int n, num;
    int min = 101;
    std::cin >> n;
    std::vector<int> v;

    for (int i=0; i<n; i++) {
        std::cin >> num;
        v.push_back(num);
    }

    for (int i=0; i<n; i++) {
        if (v[i] > 0 && v[i] < min) min = v[i];
    }

    std::cout << min;
}