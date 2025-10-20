#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
    std::cout << "*************************************************\n";

    try {
        std::cout << "test with vector\n";
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);

        std::vector<int>::iterator it = easyfind(v, 4);
        std::cout << *it << "\n";
        it = easyfind(v, 0);
    }
    catch (std::exception &e) {
        std::cout << e.what();
    }

    std::cout << "*************************************************\n";

    try {
        std::cout << "test with list\n";
        int arr1[] = {1, 2, 3, 4, 5};
        std::list<int> list(arr1, arr1 + 5);

        std::list<int>::iterator it = easyfind(list, 1);
        std::cout << *it << "\n";
        it = easyfind(list, -1);
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "*************************************************\n";

    try {
        std::cout << "test with deque\n";
        int arr2[] = {1, 2, 3, 4, 5};
        std::deque<int> deq(arr2, arr2 + 5);

        std::deque<int>::iterator it = easyfind(deq, 5);
        std::cout << *it << "\n";
        it = easyfind(deq, 200);
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
