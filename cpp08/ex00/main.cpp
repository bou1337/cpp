

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>
int main()
{   
    try
    {   std:: cout<<"test with Array\n" ;
        std::array<int,5>tab = {1,2,3,4,5} ;
        std::array<int,5>::iterator it = easyfind(tab,2) ;
        std::cout<<*it<<"\n" ;
        it = easyfind(tab ,100) ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"*************************************************\n" ; 
    try{
        std::cout<<"test with vector\n" ; 
        std::vector <int> v = {1,2,3,4,5} ;
        std::vector<int>::iterator it = easyfind(v , 4) ; 
        std::cout<<*it<<"\n" ;
        it = easyfind(v , 0) ; 
        
    }
    catch(std::exception &e)
    {
        std::cout<<e.what() ;
    }
    std::cout<<"*************************************************\n" ; 
    try
    {   std::cout<<"test with list\n"  ;
        std::list<int> list = {1,2,3,4,5} ; 
        std::list<int> ::iterator it = easyfind(list , 1) ; 
        std::cout<< *it<<"\n" ; 
        it  = easyfind(list ,  -1) ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"*************************************************\n" ; 
    try
    {   std::cout<<"test with deque\n";
        std::deque <int> deque = {1,2,3,4,5} ; 
        std::deque<int>::iterator it = easyfind(deque , 5) ; 
        std::cout<<*it<<"\n" ;
        it = easyfind(deque ,200) ; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}