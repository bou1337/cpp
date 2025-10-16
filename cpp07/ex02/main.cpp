

#include <iostream>
#include "Array.hpp"


int  main()
{
    try
    {
        Array<int> a ;
         std::cout<<"size of array a ="<<a.size()<<"\n" ;
        Array<int> b(20) ;
        std::cout<<"size of array b ="<<b.size()<<"\n" ;
        for(int  i = 0 ;i<20;i++)
        {
            std::cout<<b[i]<<"," ;
        }
        std::cout<<"\n" ;
        std::cout<<"*****************************************************************************************\n" ;
        
        a = b ; 
        a[0] = 200 ;
        for(int i = 0 ; i<20 ; i++)
        {
            std::cout<<a[i]<<"," ;
        }
        std:: cout<<"\n" ;
        std::cout<<"*****************************************************************************************\n" ;
        

        Array<int> c(a) ;
        for(int i = 0 ; i<20 ; i++)
        {
            std::cout<<c[i]<<"," ;
        }
        std::cout<<"\n" ;
        std::cout<<"*****************************************************************************************\n" ;
        const  Array<int> d(1) ; 
        std::cout<<d[0]<<"\n" ;


    }
    catch(const std::exception  &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<char>  a(10) ;
        for(int i = 0 ; i<10;i++)
        {
            a[i] = i+'a' ;
        }
        for(int i = 0 ; i<10 ; i++)
        {
            std::cout<<a[i]<<"," ;
        } 
         std:: cout<<"\n" ;               
        std::cout<<"*****************************************************************************************\n" ;
       
        a[10] = 'k' ;
    }
    catch(const std::exception  &e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
