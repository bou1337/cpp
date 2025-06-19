
#ifndef BUREAUCAT_H
#define BUREAUCAT_H
#include <string>
#include <iostream>
#include "Form.hpp"
class Bureaucrat
{
    private :
        std :: string name ;
        int grade ;
    public :
        std :: string  getName();
        int getGrade() ;
        Bureaucrat() ;
        Bureaucrat(std :: string name , int grade) ;
        Bureaucrat(Bureaucrat &obj) ;
        Bureaucrat & operator=(Bureaucrat &obj) ;

        void Bureaucrat::signForm(Form& form)  ;
        ~Bureaucrat() ;
        class GradeTooHighException :public std ::exception 
        {
            const  char * what() const noexcept override ;
        } ;
        class GradeTooLowException :public std :: exception
        {
            const char * what() const  noexcept override ;
        } ;
        void decrement() ;
        void increment() ;
        friend  std ::ostream &  operator<<(std ::ostream& os , Bureaucrat& obj) ;
        
} ;
#endif