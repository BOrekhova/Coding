#include <iostream>
#include <vector>

int main()
{

    const int size = 10;
    std::vector<std::vector<int>> data;

    for (int i = 0; i < size; i++) {
        std::vector<int> temp;
        for (int j = 0; j < size; j++) {
            temp.push_back(0);
        }
        data.push_back(temp);
        temp.shrink_to_fit();
    }
}