

#include "PmergeMe.hpp"

int  main(int ac, char *av[])
{   std::vector<int > data_vector ;
    std::list<int>  data_list ;
    try
    {
        if(ac==1)
        throw "Error" ;
        check_input(av, data_vector, data_list) ;
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