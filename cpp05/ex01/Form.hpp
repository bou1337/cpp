

#ifndef FORM_H
#define FORM_H
#include <string>
#include <iostream>

class Bureaucrat ;

class Form
{
    private :
        std :: string  name ;
        bool sign  ;
        const int grade_to_sign ;
        const int  grade_to_execute ;

    
    public :
        Form() ;
        Form(std :: string  name , int grade_to_sign , int grade_to_execute ) ;
        Form(Form &obj) ;
        Form & operator =(Form &obj) ;
        bool get_sing() ;
        int get_grade_sign() ;
        int get_grade_execute() ;
        std ::string get_name() ;
        void beSigned(Bureaucrat& obj) ;
        ~Form() ;

        class GradeTooHighException : public  std ::exception
        {
            public :
            const  char * what() const noexcept ;
        } ;
        class GradeTooLowException :std ::exception
        {   
            public :
            const  char * what() const noexcept ;
        } ;



} ;
#endif