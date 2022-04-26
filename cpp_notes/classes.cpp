Classes

//  a user-defined data type, which holds its own data members and member functions

#include <iostream>


class Animal
{
public:        // to use everywhere
    int age;
};

int main()
{
    Animal Barbos;
    Barbos.age = 15;
    std::cout << Barbos.age;
}
