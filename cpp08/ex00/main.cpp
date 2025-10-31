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
    try
    {   int tab[] = {1 ,1,2 ,3,4} ;
        std::cout <<"Test with const vector\n" ;
        const   std::vector<int> v(tab, tab+5) ;
        std::vector<int>::const_iterator  it  = easyfind(v,1) ;
        std::cout<<*it <<"\n" ;  
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}
