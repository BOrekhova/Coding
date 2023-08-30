#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b, c;
    cin >> a >> b >> c; // read the first three elements
    for (int i = 3; i < n; i++) {
        a = b;
        b = c;
        cin >> c;
        if (b > a && b > c) {
            cout << b << " is a strict local maximum" << endl;
        }
    }

   