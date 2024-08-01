#include <iostream>
#include <vector>

int main()
{
    int n;
    char move;
    std::cin >> n;

    std::vector<std::vector<char>> matrix(n, std::vector<char>(n));

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}
