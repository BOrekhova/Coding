#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Vector is a dynamic array
// index
// vector is a template

int main()
{
    // to create a vector

    vector<int> v(100); // 100 elements
    vector<int> v2; // 0 elements
    vector<int> v1 = { 10, 20, 30 };

    // refer to the cell

    cout << v1[1];
    cout << v1.at(1);

    // memory reserve

    v1.reserve(6); // reserve 6 cells for the vector

    // methods

    v1.size(); // size of the vector
    v1.capacity(); // capacity of the vector
    v1.empty(); // is it empty (bool)
    v1.push_back(40); // add an element in the end
    v1.emplace_back(50); // add an element in the end
    v1.insert(v1.end(), 60); // add an element in the end
    v1.insert(v1.begin(), 0); // add the element to the beginning
    v1.pop_back(); // remove the last element
    v1.front(); // return the first element of the vector
    v1.back(); // return the last element of the vector
    v1.clear(); // delete all the elements
    v1.shrink_to_fit(); // clear memory
    v1.resize(3); // left only first three elements

    std::sort(v1.begin(), v1.end()); // sort from min to max
    std::sort(v1.rbegin(), v1.rend()); // sort from max to min

    for (auto& el : v1) { // перебрать контейнер
        cout << el << endl;
    }

    for (size_t i = 0; i != v1.size(); ++i) {
        std::cout << v1[i] << std::endl;
    }

    for (auto it = v1.begin(); it != v1.end(); it++) {
        cout << *it << endl;
    }

    // iterators

    // begin points to the first element, end to the last (it does not exist)

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *it << endl;
    }

    for (vector<int>::const_iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *it << endl;
    }

    for (vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++) {
        cout << *it << endl;
    }

    for (vector<int>::const_reverse_iterator it = v1.rbegin(); it != v1.rend(); it++) {
        cout << *it << endl;
    }

    // matrix
    // we created a matrix with 0 and then changed every element

    int str = 2, col = 3;
    std::vector<std::vector<int>> matrix(str, std::vector<int>(col));

    for (size_t i = 0; i != str; ++i) {
        for (size_t j = 0; j != col; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (size_t i = 0; i != str; ++i) {
        for (size_t j = 0; j != col; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}
