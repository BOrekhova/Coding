#include <iostream>
#include <queue>

// SIMPLE QUEUE
// FIFO - first in, first out
// no iterators

// creation

std::queue <std::string> qu;

// methods and functions

qu.empty();
qu.size();
qu.push("new element"); // add new element in the end
std::cout <<  "the last element:" << qu.back() << std::endl;
std::cout << "the first element:" << qu.front() << std::endl;


while (!qu.empty())
{
    std::cout << qu.front() << std::endl;
    qu.pop();
}
std::cout << "Size: " << qu.size() << std::endl;

// DEQUE (DOUBLE ENDED QUEUE)