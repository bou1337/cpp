

#include "Span.hpp"


#include <iostream>




int main()
{   
    try
    {
        std::cout<<"Test from subject\n" ; 
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"*****************************************************************************\n" ; 
    try
    {
        
        Span s(10000) ;
    
        for(int  i = 0 ; i<10000 ; i++)
        {
            s.addNumber(i) ;
        }
       // s.print() ;
        std::cout<<"\n" ;
        s.addNumber(24) ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    
    std::cout<<"*****************************************************************************\n" ; 
    try
    {
        Span s(4) ;
        s.addNumber(1) ; 
        s.addNumber(2) ; 
        s.addNumber(3) ; 
        s.addNumber(4) ;
        std::cout<<s.shortestSpan()<<"\n" ; 
        std::cout<<s.longestSpan()<<"\n" ; 

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Span s1(4) ;
        int tab[]={1,2,3,4}  ;
        std::vector<int> v(tab, tab+4) ; 
        s1.addNumber(v.begin() ,v.end()) ;
      //  s1.print() ;
        std::cout<<"\n" ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}