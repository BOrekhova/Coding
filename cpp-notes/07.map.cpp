#include <iostream>
#include <map>

// Map is an associative container with the principle [key - value]
// Multimap is a map that can have same keys, will return the first key

int main()
{
    // to create a map / multimap

    std::map<std::string, int> mp = {
        { "one", 1 },
        { "two", 2 },
    };

    std::multimap<int, std::string> multi_mp;

    // to print map

    std::cout << mp["one"] << std::endl; // print 1

    for (auto& el : mp) {
        std::cout << el.first << el.second << std::endl;
    }

    // methods

    mp.emplace(1, "qwerty"); // add an element
    mp.insert(std::pair<std::string, int>("three", 3)); // add an element
    mp["four"] = 4; // add an element

    auto res = mp.find("one");
}