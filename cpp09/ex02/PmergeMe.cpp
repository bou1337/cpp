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


double getTimeDiff(struct timespec &start, struct timespec &end)
{
    
    double start_ns = (double)start.tv_sec * 1000000000.0 + (double)start.tv_nsec;
    double end_ns   = (double)end.tv_sec * 1000000000.0 + (double)end.tv_nsec;
    double diff_ns = end_ns - start_ns;

    
    return diff_ns / 1000.0;
}

void PmergeMe(std::vector<int> &data)
{
    if (data.size() <= 1)
        return;

    typedef std::vector<int>::iterator Iterator;

    int stray;
    bool hasStray = false;
    if (data.size() % 2 != 0)
    {
        stray = data.back();
        data.pop_back();
        hasStray = true;
    }

    std::vector<int> S;
    
    std::vector<int> pend; 
    
    for (Iterator it = data.begin(); it != data.end(); )
    {
        int val1 = *it++;
        int val2 = *it++;

        if (val1 > val2)
        {
            S.push_back(val1);
            pend.push_back(val2);
        }
        else
        {
            S.push_back(val2);
            pend.push_back(val1);
        }
    }

    PmergeMe(S); 
    for (size_t i = 0; i < pend.size(); ++i)
    {
        int& val_to_insert = pend[i];
        
        Iterator insert_pos = std::lower_bound(S.begin(), S.end(), val_to_insert);
        
        S.insert(insert_pos, val_to_insert);
    }

    if (hasStray)
    {
        Iterator insert_pos = std::lower_bound(S.begin(), S.end(), stray);
        S.insert(insert_pos, stray);
    }

    data = S;
}

void PmergeMe(std::list<int> &data)
{
    if (data.size() <= 1)
        return;

    typedef std::list<int>::iterator Iterator;

    int stray;
    bool hasStray = false;
    if (data.size() % 2 != 0)
    {
        stray = data.back();
        data.pop_back();
        hasStray = true;
    }

    std::list<int> S;
    std::vector<int> pend; 
    
    for (Iterator it = data.begin(); it != data.end(); )
    {
        int val1 = *it++;
        int val2 = *it++;

        if (val1 > val2)
        {
            S.push_back(val1);
            pend.push_back(val2);
        }
        else
        {
            S.push_back(val2);
            pend.push_back(val1);
        }
    }

    PmergeMe(S);

    for (size_t i = 0; i < pend.size(); ++i)
    {
        int& val_to_insert = pend[i];
        
        Iterator insert_pos = std::lower_bound(S.begin(), S.end(), val_to_insert);
        
        S.insert(insert_pos, val_to_insert);
    }

    if (hasStray)
    {
        Iterator insert_pos = std::lower_bound(S.begin(), S.end(), stray);
        S.insert(insert_pos, stray);
    }

    data = S;
}