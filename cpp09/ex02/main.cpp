#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>  
#include <iomanip>    
#include <ctime>      

int main(int ac, char *av[])
{
    std::vector<int> data_vector;
    std::list<int> data_list;
    try
    {
        if (ac == 1)
            throw "Error";
            
        check_input(av, data_vector, data_list);
        
        std::cout << "Before: ";
        for (std::vector<int>::const_iterator it = data_vector.begin(); it != data_vector.end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << "\n";

    
        struct timespec start_time, end_time;

      
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start_time);
        
        PmergeMe(data_vector);
        
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end_time);
        
        double vec_us = getTimeDiff(start_time, end_time); 


        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start_time);
        
        PmergeMe(data_list);
        
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end_time);
        
        double list_us = getTimeDiff(start_time, end_time); 


        std::cout << "After:  ";
        for (std::vector<int>::const_iterator it = data_vector.begin(); it != data_vector.end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << "\n";

        std::cout << std::fixed << std::setprecision(5); 

        std::cout << "Time to process a range of " << data_vector.size()
                  << " elements with std::vector : " 
                  << vec_us << " us" << std::endl;

        std::cout << "Time to process a range of " << data_list.size()
                  << " elements with std::list   : " 
                  << list_us << " us" << std::endl;
    }
    catch (const char *e)
    {
        std::cerr << e << '\n';
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }
    return 0; 
}