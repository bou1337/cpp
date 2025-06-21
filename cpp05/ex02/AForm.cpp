

#include  "AForm.hpp"
#include "Bureaucrat.hpp"


AForm ::AForm( ) : grade_to_execute(0),grade_to_sign(0) , name("Grade name") 
{
    std :: cout <<"Form's default constructor called\n" ;
} 

AForm :: AForm(std :: string  name , int grade_to_sign , int grade_to_execute ) : grade_to_sign(grade_to_sign) , grade_to_execute(grade_to_execute), name(name) , sign(false) 
{   
    std :: cout <<"Form's Constructor called\n" ;
    if(grade_to_sign<1|| grade_to_execute<1)
    throw GradeTooHighException() ;
    if(grade_to_sign>150|| grade_to_execute>150)
    throw GradeTooLowException() ;
}

AForm ::AForm(AForm &obj) : grade_to_execute(obj.grade_to_execute) , grade_to_sign(obj.grade_to_sign) 
{
    name = obj.name ;
    std :: cout <<"Form's Copy Constructor called\n" ;
}

AForm ::~AForm()
{
    std :: cout <<"Form's Destructor called\n" ;
}

 AForm & AForm:: operator =(AForm &obj) 
 {
    if(this !=&obj)
    {
        name  = obj.name ;
        sign = obj.sign ;
    }
    std :: cout <<"Copy assignment  operator called \n" ;
    return *this ;
 }

bool AForm :: get_sign() 
{
    return sign ;
} 

 int AForm:: get_grade_sign() 
 {
    return grade_to_sign ;
 }

int AForm :: get_grade_execute() 
{
    return  grade_to_execute ;
}

  void AForm:: beSigned(Bureaucrat& obj) 
  {
    if(grade_to_sign >=obj.getGrade() )
    sign =true ;
  }

const char* AForm::GradeTooHighException::what() const noexcept {
    return "Form: Grade too high!";
}

const char* AForm::GradeTooLowException::what() const noexcept {
    return "Form: Grade too low!";
}

 std ::string  AForm ::get_name() 
 {
    return name  ;
 }


 std ::ostream & operator<<(std ::ostream &os , AForm  &obj)
 {

    std :: cout <<"Form's name "<<obj.get_name()<<" From's status "<<obj.get_sign()<<" Grade to sign "<<obj.get_grade_sign() <<" Grade to execute "<<obj.get_grade_execute()<<"\n" ;
    return os ;
 }


