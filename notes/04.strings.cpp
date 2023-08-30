#include <iostream>
#include <string>

// String == std::vector<char>

int main()
{
    // to create a string

    std::string s = "string";

    // methods

    // + some methods and functions of vector
    s += 's'; // we can add a char or a string in the end
    std::string sub1 = s.substr(0, 3); // substring starts with index 0 and consists of 3 elements
    size_t pos1 = s.find("str"); // search of a symbol or a substring // return 0
    s.insert(0, "some "); // >> some strings // insert a substring
    s.replace(0, 4, "special"); // >> special strings // replace a substring
    s.erase(0, 8); // >> strings // delete a substring
}