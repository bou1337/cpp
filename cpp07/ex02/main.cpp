

#include <iostream>
#include "Array.hpp"


int  main()
{   
    try
    {

        Array<int> a(10) ;
        unsigned int  i = 0 ; 
        while(i<a.size_fnc()+3)
        {
            std::cout<<a[i]<<"\n";
            i++ ; 
        }
    }
    catch(const char *exp)
    {
        std:: cout<<exp<<"\n" ; 
    }

}