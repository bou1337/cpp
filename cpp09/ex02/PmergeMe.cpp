#include "PmergeMe.hpp"


void check_input(char *av[] , std::vector<long long > &data)
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
        data_in_vector(data ,av[i]) ;
        i++ ;
    }
    
}

 long long to_int(std::string s)
 {
    std::stringstream ss(s) ;
    long long rest = -1 ;  ;
    ss>>rest ;
    std::cout <<rest<<"\n" ;
    return  rest ;
   } 

   void  data_in_vector(std::vector<long long> &data , std::string s)
   {
        long  long result =  to_int(s) ;
        if(result!=-1)
        data.push_back(result) ;
   }
