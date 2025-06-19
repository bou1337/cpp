

#ifndef FORM_H
#define FPRM_H
#include "Bureaucrat.hpp"



class Form
{
    private :
        std :: string  name ;
        bool sign = false ;
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
        void beSigned(Bureaucrat& obj) ;
        ~Form() ;
       

        class GradeTooHighException : public  std ::exception
        {
            public :
            const  char * what() const noexcept ;
        } ;
        class GradeTooLowException :std ::exception
        {
            const  char * what() const noexcept ;
        } ;



}
#endif