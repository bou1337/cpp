

#include "iter.hpp"
#include <iostream>
template <typename T>
void print(T &i)
{
    std:: cout<<i<<"\n" ;
}
int main()
{
    int tab[] = {1,2,3,4} ;
    iter(tab , 4,print )   ;
    std:: cout<<"******************************************************\n" ; 
    char tab1[] = {'a' , 'b' , 'c' ,  'd'} ; 
    iter(tab1,4, print) ;

}