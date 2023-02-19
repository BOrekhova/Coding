#include <iostream>

int main()
{
    std::pair<int, std::string> pr(1, "Petr");
    std::cout << pr.first << ' ' << pr.second << std::endl;
}
