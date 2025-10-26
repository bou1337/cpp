#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"
#include <unordered_map>
#include <map>
int  main(int ac , char *av[])
{   
    
    float *value  = new float() ;
     std::map<std::string , float> map ;

    if(ac!=2)
    {
        std::cerr<<"i can take more than  less 3 arguments\n" ;
        return 1 ;
    }

    std::ifstream f("data.csv") ; 
    if(!f.is_open())
    {
        std::cerr<<"can't open file data.csv\n" ;
        return  1 ;
    }
     data(map) ; 
    check_input_file(av, value , map) ;  

    return  0 ; 

}