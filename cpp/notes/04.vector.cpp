#include <iostream>
#include <vector>
using namespace std;

// Vector is a dynamic array

int main()
{
    // to create a vector

    vector<int> v(100); // 100 elements
    vector<int> v2; // 0 elements
    vector<int> v1 = { 10, 20, 30 };

    // refer to the cell

    cout << v1[1];
    cout << v1.at(1);

    // methods

    v1.size(); // size of the vector
    v1.capacity(); // capacity of the vector
    v1.empty(); // is it empty (bool)
    v1.push_back(40); // add an element in the end
    v1.emplace_back(50); // add an element in the end
    v1.insert(v1.end(), 60); // add an element in the end
    v1.insert(v1.begin(), 0); // add the element to the beginning
    v1.pop_back(); // remove the last element
    v1.front(); // show the first element of the vector
    v1.back(); // show the last element of the vector
    v1.clear(); // delete all the elements
    v1.shrink_to_fit(); // clear memory

    for (auto& el : v1) { // перебрать контейнер
        cout << el << endl;
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
}
