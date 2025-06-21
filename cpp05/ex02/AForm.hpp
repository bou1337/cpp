

#ifndef AFORM_H
#define AFORM_H
#include <string>
#include <iostream>

class Bureaucrat ;

class AForm
{
    private :
        std :: string  name ;
        bool sign  ;
        const int grade_to_sign ;
        const int  grade_to_execute ;

    
    public :
        AForm() ;
        AForm(std :: string  name , int grade_to_sign , int grade_to_execute ) ;
        AForm(AForm &obj) ;
        AForm & operator =(AForm &obj) ;
        bool get_sign() ;
        int get_grade_sign() ;
        int get_grade_execute() ;
        std ::string get_name() ;
        void beSigned(Bureaucrat& obj) ;
        ~AForm() ;

        class GradeTooHighException : public  std ::exception
        {
            public :
            const  char * what() const noexcept override ;
        } ;
        class GradeTooLowException :public std ::exception
        {   
            public :
            const  char * what() const noexcept override;
        } ;
} ;
std :: ostream & operator<<(std ::ostream &os , AForm &obj)  ;
#endif