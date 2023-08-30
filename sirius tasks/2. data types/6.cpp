#include <iostream>
#include <string>

int main()
{
    int num;
    std::cin >> num;
    std::cout << "The next number for the number " << num << " is " << num + 1 << "." << std::endl;
    std::cout << "The previous number for the number " << num << " is " << num - 1 << "." << std::endl;
}