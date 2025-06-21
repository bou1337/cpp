

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try{

    Form Form1("Form1", 12,20) ;
    std :: cout << Form1  ;
    Bureaucrat Bur1("Bur1",2) ;
    std :: cout <<Bur1 ;
    Bur1.signForm(Form1) ;
    Form1.beSigned(Bur1) ;
    std :: cout <<Form1 ;

    }
    catch(const std :: exception &e)
    {
        std :: cout<<"exception "<<e.what() <<"\n" ;
    }
   
}