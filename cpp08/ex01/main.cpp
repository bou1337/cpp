

#include "Span.hpp"


#include <iostream>




int main()
{   
    try
    {
        
        Span s(20) ;
    
        for(int  i = 0 ; i<20 ; i++)
        {
            s.addNumber(i) ;
        }
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
        s.addNumber(1) ; 
        s.addNumber(2) ; 
        s.addNumber(3) ;
        std::cout<<s.shortestSpan()<<"\n" ; 
        std::cout<<s.longestSpan()<<"\n" ; 

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}