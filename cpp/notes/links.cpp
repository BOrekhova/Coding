#include <iostream>
#include <vector>

void incrementVec(std::vector<int>& n)
{
    for (auto& el : n) {
        int& el_ref = el;
        el_ref += 1;
    }
}

int main()
{
    int val = 11;
    int& val_ref = val;
    val_ref = 10; // если я меняю ссылку, то я меняю и переменную

    // int* ptr_val = &val;
    // int& val_ref = *ptr_val;
    // int *val_ref_ptr = &val_ref

    std::vector<int> v1;
    for (size_t i = 0; i < 10; i++)
        v1.push_back(i);

    incrementVec(v1);

    for (auto& el : v1) {
        std::cout << el << std::endl;
    }
}
