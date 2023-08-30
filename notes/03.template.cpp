#include <iostream>

// Templates (шаблоны)
// the compiler automatically calls a function for a certain type
// works with different types

// FUNCTION TEMPLATE

template <class T>
T sum(T a, T b)
{
    return (a + b);
}

template <class T, class U>
T smaller(T a, U b)
{
    return (a < b ? a : b);
}

// CLASS TEMPLATE

template <class T>
class Pair {
private:
    T first, second;

public:
    Pair(T a, T b)
        : first(a)
        , second(b)
    {
    }
    T bigger();
};

template <class T>
T Pair<T>::bigger()
{
    return (first > second ? first : second);
}

int main()
{
    int a = 10, b = 20;
    double x = 7.15, y = 8.15;
    std::cout << sum(a, b) << std::endl;
    std::cout << sum(x, y) << std::endl;
    std::cout << smaller(a, x) << std::endl;

    Pair<int> obj_int(11, 22);
    Pair<double> obj_double(1.15, 100.25);
    std::cout << obj_int.bigger() << std::endl;
    std::cout << obj_double.bigger() << std::endl;
}