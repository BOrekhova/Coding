#include <iostream>

int main()
{
    int n, b;
    char c;
    std::cin >> n >> b >> c;
    int cnt=0;

    std::string res = "";
    
    for (int i=0; n>0; i++) {
        if (n == b) {
            res = "10" + res;
            break;
        }
        else {
            if (n % b > 9) res = char('A' + (n%b) - 10) + res;
            else res = char((n%b) + '0') + res;
        }
        n /= b;
    }

    for (int i=0; i<res.size(); i++) {
        if (res[i] == c) cnt++;
    }

    std::cout << cnt;
}
