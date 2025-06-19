

#include  "Form.hpp"


Form ::Form( ) : grade_to_execute(0),grade_to_sign(0) , name("Grade name") 
{
    std :: cout <<"Form's default constructor called" ;
} 

Form :: Form(std :: string  name , int grade_to_sign , int grade_to_execute ) : grade_to_sign(grade_to_sign) , grade_to_execute(grade_to_execute), name(name)
{
    std :: cout <<"Form's Constructor called" ;
    if(grade_to_execute<1 || grade_to_sign<1)
    throw GradeTooHighException() ;
    if(grade_to_sign>150 || grade_to_execute>150)
    throw GradeTooLowException() ;
}

Form ::Form(Form &obj) : grade_to_execute(obj.grade_to_execute) , grade_to_sign(obj.grade_to_sign) 
{
    name = obj.name ;
    std :: cout <<"Form's Copy Constructor called" ;
}

Form ::~Form()
{
    std :: cout <<"Form's Destructor called" ;
}

 Form & Form:: operator =(Form &obj) 
 {
    
 }
