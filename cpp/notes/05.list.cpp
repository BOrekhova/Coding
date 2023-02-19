#include <iostream>
#include <list>

// List == "linked list"
// no index

int main()
{
    // to create a list

    std::list<int> l1;

    // methods

    std::list<int>::iterator it, start, fin;

    l1.push_back(20); // add an element in the end
    l1.push_front(10); // add an element to the beginning
    l1.front(); // the first element of the list
    l1.back(); // the last element of the list
    l1.insert(it, 30); // add the element (30) before the it
    l1.pop_front(); // deletes the first element of the list
    l1.pop_back(); // deletes the last elements of the list
    l1.erase(it); // deletes the element under the it iterator
    l1.erase(start, fin); // deletes all the elems between start and fin except fin
    l1.clear(); // deletes all the elements of the list
    l1.size(); // the size of the list
    l1.empty(); // is it empty (bool)
    l1.unique(); // leaves only unic elements
    l1.sort(); // sort the elements from smallest to biggest

    for (std::list<int>::iterator it = l1.begin(); it != l1.end(); it++) {
        std::cout << *it << std::endl;
    }

    for (auto it = l1.begin(); it != l1.end(); it++) {
        std::cout << *it << std::endl;
    }
}
