
#include "Base.hpp"
#include "C.hpp"
#include "A.hpp"
#include "B.hpp"

#include <cstdlib> 
#include <ctime>    
#include <iostream>
Base * generate(void)
{ 
    int rand = std::rand()%3  ; 
    switch (rand)
    {
        case 0 : 
            return new A() ;
        case 1:
            return new B() ; 
        default : 
            return new C() ;
    }
    
}
void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout<<"Type A\n" ;
    else if(dynamic_cast<B*>(p))
        std::cout<<"Type B\n" ;
    else if(dynamic_cast<C*>(p))
        std:: cout<<"Type C\n" ; 
    else 
        std:: cout<<"No one\n" ;
}
void  identify(Base &p)
{
    try
    {
        dynamic_cast<A&>(p) ;
        std::cout<<"Type A\n" ;
        return ;
    }
    catch(...)
    {

    }
    try
    {
        dynamic_cast<B&>(p) ;
        std:: cout<<"Type B\n" ;
        return ;
    }
    catch(...)
    {}
    try
    {
        dynamic_cast<C&>(p) ;
        std::cout<<"Type C\n" ;
        return ; 
    }
    catch(...)
    {} 
    std:: cout<<"No one\n" ; 
    
}

int  main()
{   srand(time(0)) ;
    Base   *a = new  A() ; 
    identify(a)  ; 
    Base  *b  =  new B() ;
    identify(b) ;
    Base  *c = new C() ;
    identify(c) ; 
    Base   *base = new Base() ; 
    identify(base) ;
    std:: cout<<"-----------------------------------------------------------------------------\n" ; 
    A a1 ; 
    B b1 ; 
    C c1 ;
    Base base1 ;
    identify(a1) ;
    identify(b1) ; 
    identify(c1) ;
    identify(base1) ; 
    std::cout<<"-----------------------------------------------------------------------------------\n" ; 
    int  i = 0 ; 
    while(i<10)
    {
        Base *rand =generate() ; 
        identify(rand) ; 
        delete  rand ; 
        i++ ; 
    }

    delete a;
    delete b ; 
    delete c ; 
    delete base  ; 
 }