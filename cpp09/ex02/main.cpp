

#include "PmergeMe.hpp"

int  main(int ac, char *av[])
{   std::vector<long long > data ;
    try
    {
        if(ac==1)
        throw "Error" ;
        check_input(av) ;
                
        std:: cout<<"Gooooooooooooooooooood\n" ;
    }
    catch(const char * e)
    {
        std::cerr << e<< '\n';
    }
    catch(const std::exception &e)
    {
        std::cerr<<e.what()<<"\n" ;
    }
}