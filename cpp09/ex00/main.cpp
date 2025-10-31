#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"
#include <map>
int  main(int ac , char *av[])
{   
    
    float *value  = new float() ;
     std::map<std::string , float> map ; // data / exchange //

    if(ac!=2)
    {
        std::cerr<<"i can take more than or less 3 arguments\n" ;
        return 1 ;
    }

    std::ifstream f("data.csv") ;
    std::ifstream ff(av[1]) ;
    if(!f.is_open() || !ff.is_open())
    {
        std::cerr<<"can't open file\n" ;
        return  1 ;
    }
     data(map) ;
    check_input_file(av, value , map) ;  

    return  0 ; 

}