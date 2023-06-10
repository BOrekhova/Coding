#include <iostream>

int main() {
    int N, K;
    std::cin >> N >> K; 
    std::cout << K * (N / K) * (N / K + 1) / 2 + (N % K) * (N / K + 1);
}