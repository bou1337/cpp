#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void)
{
    int r = std::rand() % 3;
    switch (r)
    {
        case 0: return new A();
        case 1: return new B();
        default: return new C();
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "Type B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "Type C\n";
    else
        std::cout << "Unknown type\n";
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type A\n";
        return;
    }
    catch (...) {}

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Type B\n";
        return;
    }
    catch (...) {}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Type C\n";
        return;
    }
    catch (...) {}

    std::cout << "Unknown type\n";
}

int main()
{
    std::srand(std::time(0));

    std::cout << "identification by pointer:\n";
    identify(new A());
    identify(new B());
    identify(new C());
    identify(new Base()) ; 
    std::cout << "--------------------------------------------------\n";
    std::cout << "identification by ref:\n";
    A a ;
    B b ;
    C c ;
    Base  base  ; 
    identify(a) ; 
    identify(b) ; 
    identify(c) ; 
    identify(base)   ; 
    std::cout << "--------------------------------------------------\n";

    std::cout << "Random identification:\n";
    for (int i = 0; i < 10; i++)
    {
        Base* obj = generate();
        identify(obj);
        delete obj;
    }


    return 0;
}
