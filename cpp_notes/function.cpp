Function

#include <iostream>

void hello(std::string name) // void - пустота, return nothing
{
    std::cout << "Hello, " << name << endl;
}

int main()
{
    hello("Barbara") // to call function hello
}
