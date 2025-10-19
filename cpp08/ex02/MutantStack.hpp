#ifndef MUTANT_H
#define MUTANT_H

#include <deque>
#include <stack>
#include <iostream> 
template<typename T>
class MutantStack: public std::stack<T>
{
    public :
        MutantStack()
        {
            std::cout<<"Default constructor\n" ;
        }
        MutantStack(MutantStack &obj)
        {
            std::cout<<"Copy constructor clalled\n" ;
        }
        MutantStack & operator=(MutantStack &obj)
        {
            std::cout<<"Assigmnemtn operator called\n" ;
        }

        ~MutantStack()
        {
            std::cout<<"Default constructor called\n" ;
        }

        typedef typename std::deque<T>::iterator iterator ;

        iterator begin()
        {
            return  this->c.begin() ;
        }

        iterator  end()
        {
            return this->c.end() ;
        }


} ;


#endif