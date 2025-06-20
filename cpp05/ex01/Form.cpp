

#include  "Form.hpp"
#include "Bureaucrat.hpp"


Form ::Form( ) : grade_to_execute(0),grade_to_sign(0) , name("Grade name") 
{
    std :: cout <<"Form's default constructor called\n" ;
} 

Form :: Form(std :: string  name , int grade_to_sign , int grade_to_execute ) : grade_to_sign(grade_to_sign) , grade_to_execute(grade_to_execute), name(name)
{
    std :: cout <<"Form's Constructor called\n" ;
    if(grade_to_execute<1 || grade_to_sign<1)
    throw GradeTooHighException() ;
    if(grade_to_sign>150 || grade_to_execute>150)
    throw GradeTooLowException() ;
}

Form ::Form(Form &obj) : grade_to_execute(obj.grade_to_execute) , grade_to_sign(obj.grade_to_sign) 
{
    name = obj.name ;
    std :: cout <<"Form's Copy Constructor called\n" ;
}

Form ::~Form()
{
    std :: cout <<"Form's Destructor called\n" ;
}

 Form & Form:: operator =(Form &obj) 
 {
    if(this !=&obj)
    {
        name  = obj.name ;
        sign = obj.sign ;
    }
    std :: cout <<"Copy assignment  operator called \n" ;
    return *this ;
 }

bool Form :: get_sing() 
{
    return sign ;
} 

 int Form:: get_grade_sign() 
 {
    return grade_to_sign ;
 }

int Form :: get_grade_execute() 
{
    return  grade_to_execute ;
}

  void Form:: beSigned(Bureaucrat& obj) 
  {
    if(grade_to_sign >=obj.getGrade() )
    sign =true ;
  }

const char* Form::GradeTooHighException::what() const noexcept {
    return "Form: Grade too high!";
}

const char* Form::GradeTooLowException::what() const noexcept {
    return "Form: Grade too low!";
}

 std ::string  Form ::get_name() 
 {
    return name  ;
 }
