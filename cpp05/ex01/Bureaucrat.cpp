
#include "Bureaucrat.hpp"
#include "Form.hpp"
Bureaucrat ::Bureaucrat()
{
    std :: cout<<"Bureaucrat's Default Constructor called\n" ;
}
Bureaucrat ::Bureaucrat(std :: string name , int grade): name(name) , grade(grade)
{
    std :: cout <<"Bureaucrat's Constructor called\n" ;
     if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat ::Bureaucrat(Bureaucrat  & obj)
{
    this->name = obj.name ;
    this ->grade = obj.grade ;
    std :: cout <<"Bureaucrat's copy constructor called\n" ;
}

Bureaucrat& Bureaucrat  ::operator=(Bureaucrat& obj)
{
    if(this !=&obj)
    {
        this ->name = obj.name ;
        this ->grade = obj.grade ;
    }
    std :: cout <<"Bureaucrat's operator assigment called\n" ;
    return *this ;
}

std :: string Bureaucrat :: getName()
{
    return name ;
}

int Bureaucrat:: getGrade() 
{
    return grade ;
}

Bureaucrat ::~Bureaucrat()
 {
    std :: cout <<"Bureaucrat's Destructor called\n" ;
 }

 const char *Bureaucrat ::GradeTooHighException::what() const noexcept
 {
    return "Grade Too High" ;
 } 

 const char * Bureaucrat ::GradeTooLowException::what() const noexcept
 {
    return "Grade Too Low" ;
 }

 std ::ostream &  operator<<(std ::ostream& os , Bureaucrat& obj)
 {
    std :: cout <<obj.name<<" bureaucrat grade "<<obj.grade<<"\n" ;
    return os ;
 }

void Bureaucrat :: decrement()
{
    grade++ ;
    throw GradeTooLowException() ;
}
void  Bureaucrat ::increment()
{
    grade --;
    if (grade<1)
    throw GradeTooHighException() ;
}


void  Bureaucrat :: signForm(Form& form) 
{
    if(grade<=form.get_grade_sign())
    std :: cout <<name<< " signed " <<form.get_name()<<"\n" ;
    else 
    std :: cout <<name<<" Couldn't sign "<<form.get_name()<<"\n" ;

}
