#include <iostream>

int main()
{
  int a, b, n;
  std::cin >> a >> b >> n;
  int cops = a * 100 + b;
  int copsForN = n * cops;
  int rub = copsForN / 100;
  int cop = copsForN % 100;
  std::cout << rub << ' ' << cop;
}