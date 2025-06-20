

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try{

    Form Form1("Form1", 1002,20) ;
    Bureaucrat Bur1("Bur1",2) ;
    Bur1.signForm(Form1) ;
    }
    catch(const std :: exception &e)
    {
        std :: cout<<"exception "<<e.what() <<"\n" ;
    }
   
}