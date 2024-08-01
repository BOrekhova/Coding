#include <iostream>
#include <vector>

int main()
{
    int n, num;
    std::cin >> n;
    std::vector<int> odd, even;

    for (int i=0; i<n; i++) {
        std::cin >> num;
        if (num % 2 == 0) even.push_back(num);
        else odd.push_back(num);
    }

    for (int i=0; i<odd.size(); i++) {
        std::cout << odd[i] << ' ';
    }

    std::cout << std::endl;

    for (int i=0; i<even.size(); i++) {
        std::cout << even[i] << ' ';
    }

    std::cout << std::endl;

    if (even.size() >= odd.size()) std::cout << 4;
    else std::cout << 3;
}