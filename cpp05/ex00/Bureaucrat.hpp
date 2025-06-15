
#ifndef BUREAUCAT_H
#define BUREAUCAT_H
#include <string>
#include <iostream>

class Bureaucrat
{
    private :
        std :: string name ;
        int grade ;
    public :
        std :: string  getName(); 
        int getGrade() ;
        Bureaucrat(std :: string name , int grade) ;
        Bureaucrat(Bureaucrat &obj) ;
        Bureaucrat & operator=(Bureaucrat &obj) ;
        ~Bureaucrat() ;
} ;
#endif