#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data { 10, 20, 30 };

    std::vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(rand());
        data.insert(data.begin(), i) // вставляет в начало
            data.emplace_back(i)
                std::cout
            << "Size: " << v1.size() << std::endl;
        std::cout << "Capacity: " << v1.capacity() << "\n\n";
    }

    for (auto& el : data) { // перебрать контейнер
        std::cout << data.first << data.second << std::endl;
    }

    // v1.clear(); // удаляет все элементы
    // v1.shrink_to_fit(); // очистить выделенную память для следующего элемента

    std::cout << "first element: " << v1.front() << std::endl;
    std::cout << "last element: " << v1.back() << std::endl;

    // ITERATORS
    // begin points to the first element, end to the last (it does not exist)
    for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        // *it = 10;
        std::cout << *it << std::endl;
    }

    for (std::vector<int>::iterator it = --v1.end(); it != v1.begin(); it--) {
        std::cout << *it << std::endl;
        // it does not print the first element
    }

    for (std::vector<int>::const_iterator it = v1.begin(); it != v1.end(); it++) {
        // *it = 10;
        std::cout << *it << std::endl;
    }

    for (std::vector<int>::reverse_iterator it = v1.begin(); it != v1.end(); it++) {
        // *it = 10;
        std::cout << *it << std::endl;
    }

    for (std::vector<int>::const_reverse_iterator it = v1.begin(); it != v1.end(); it++) {
        // *it = 10;
        std::cout << *it << std::endl;
    }
}
