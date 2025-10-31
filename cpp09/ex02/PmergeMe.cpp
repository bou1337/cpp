#include "PmergeMe.hpp"


void check_input(char *av[] , std::vector<int> &data_vector , std::list<int> &data_list)
{
    int i  = 1 ;
    int j = 0;
    while(av[i])
    {   j = 0;
        while(av[i][j])
        {
            if(!isdigit(av[i][j]))
            throw "Error" ;
            j++ ;
        }
        data_in_vector(data_vector ,av[i], data_list) ;
        i++ ;
    }
    
}

 int to_int(std::string s)
 {
    std::stringstream ss(s) ;
    long long rest = -1 ;  ;
    ss>>rest ;
    if(rest>__INT_MAX__)
        throw "Error" ;
    return  (int)rest ;
   } 

   void  data_in_vector(std::vector<int> &data_vector , std::string s , std::list<int> &data_list)
   {
        long  long result =  to_int(s) ;
        if(result!=-1)
        {
        data_vector.push_back(result) ;
        data_list.push_back(result) ;
        }
   }
