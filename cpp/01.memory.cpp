#include <iostream>

// Memory
// Stack (стопка) and Heap (куча)

// for heap you have to delete dynamic memory
// DELETE clears the memory but do not delete the pointer, cause it is in the stack

int main()
{
    int* p1 = NULL; // pointer initialized with null
    p1 = new int[20]; // request memory
    delete[] p1; // delete array pointer to by p

    int* p = new int;
    *p = 5;
    delete p;
}
