#include <iostream>
#include <vector>

int main()
{
    int n, num;
    std::cin >> n;
    std::vector<int> v;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
    int cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0;

    for (int i=0; i<n; i++) {
        std::cin >> num;
        v.push_back(num);
    }

    for (int i=0; i<n; i++) {
        if (v[i] == 1) cnt1 += 1;
        else if (v[i] == 2) cnt2 += 1;
        else if (v[i] == 3) cnt3 += 1;
        else if (v[i] == 4) cnt4 += 1;
        else if (v[i] == 5) cnt5 += 1;
        else if (v[i] == 6) cnt6 += 1;
        else if (v[i] == 7) cnt7 += 1;
        else if (v[i] == 8) cnt8 += 1;
        else if (v[i] == 9) cnt9 += 1;
    }
    std::cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << ' ' << cnt4 << ' ' << cnt5 << ' ' << cnt6 << ' ' << cnt7 << ' ' << cnt8 << ' ' << cnt9;
}