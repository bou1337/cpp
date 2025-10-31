

#include "RPN.hpp"
#include <iostream>

int main(int ac , char*av[])
{  
    

    try
    {
        if (ac!=2)
        throw "Error\n" ;
        result(av[1]) ;
    }
    catch(const char  *e)
    {
        std::cerr << e;
    }
    
}