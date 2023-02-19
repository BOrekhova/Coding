#include <iostream>
#include <set>

// Set is a container that contains a sorted set of unique objects of a single type
// Multiset is a container that contains a sorted set of objects of a single type
// no index

int main()
{
    std::set<int> st;

    st.insert(1);
    st.insert(3);
    st.insert(2);

    // st = {1, 2, 3}

    for (auto& el : st) {
        std::cout << el << std::endl;
    }
}