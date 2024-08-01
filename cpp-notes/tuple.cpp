#include <iostream>
#include <tuple>

// Tuple is a fixed-size collection of heterogeneous values

int main()
{
    std::tuple<int, float, std::string> tp(1, 10.0f, "dfsf");

    std::cout << std::get<0>(tp) << std::endl; // print 1
}