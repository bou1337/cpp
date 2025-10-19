

#ifndef EASYFIND_H
#define EASYFIND_H
#include <stdexcept>  
#include <algorithm>

template <typename T > 

typename  T::iterator  easyfind( T  &data ,int n)
{
    typename T::iterator it = std::find(data.begin() ,data.end(), n) ;
    if(it!=data.end())
        return it ; 
    else
    throw  std::runtime_error("this value does  not exist in your container\n") ;

}

#endif