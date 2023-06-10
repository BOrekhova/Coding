#include <iostream>

int main()
{
    std::string word;  
    std::cin >> word;

    for (int i=0; i<word.size(); i++) {
        if (word[i] != 'S' || word[i] != 'I' || word[i] != 'R' || word[i] != 'U') word.erase(i);
    }

    std::cout << word.find("SIRIUS");
}
