
#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <list>
# include <string>
# include <iostream>
# include <exception>
#include <sstream>
#include <limits>
#include <utility>

void check_input(char *av[] , std::vector<int> &data_vector , std::list<int> &data_list) ;
int to_int(std::string s) ;
void  data_in_vector(std::vector<int> &data_vector , std::string s , std::list<int> &data_list)  ;

template <typename T>
void PmergeMe(T &data)
{
    
    if (data.size() <= 1)
        return;

    typedef typename T::value_type ValueType;
    typedef typename T::iterator   Iterator;

    ValueType stray;
    bool hasStray = false;
    if (data.size() % 2 != 0)
    {
        stray = data.back();
        data.pop_back();
        hasStray = true;
    }

    T S;
    std::vector<ValueType> pend; 
    for (Iterator it = data.begin(); it != data.end(); )
    {
        ValueType val1 = *it++;
        ValueType val2 = *it++;

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
        ValueType& val_to_insert = pend[i];
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

double getTimeDiff(struct timespec &start, struct timespec &end) ;
#endif