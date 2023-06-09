#include <iostream>
#include <vector>

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            matrix[i][j] = i + n;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}https://www.youtube.com/watch?v=gmlMIqrk9ko&list=PLGMpv6bMethcnDWk05hriFEGh32Ws7HKV&index=15