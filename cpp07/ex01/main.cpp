#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print( T &element)
{
    std::cout << element << " ";
}

int main()
{
    std::cout << "=== Test with int array ===" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};
    iter(intArray, 5, print<int>);
    std::cout << std::endl;

    std::cout << "\n=== Test with string array ===" << std::endl;
    std::string strArray[] = {"Hello", "42", "World"};
    iter(strArray, 3, print<std::string>);
    std::cout << std::endl;

    std::cout << "\n=== Test with char array ===" << std::endl;
    char charArray[] = {'A', 'B', 'C', 'D'};
    iter(charArray, 4, print<char>);
    std::cout << std::endl;

    return 0;
}
