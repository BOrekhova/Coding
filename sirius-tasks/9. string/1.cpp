#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;

    for (int i=0; i<str.size(); i+=2) std::cout << str[i];
    for (int i=1; i<str.size(); i+=2) std::cout << str[i];
}