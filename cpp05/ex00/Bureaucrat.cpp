
#include "Bureaucrat.hpp"

Bureaucrat ::Bureaucrat(std :: string name , int grade)
{
    this->name = name ;
    this ->grade = grade ;
    std :: cout <<"Bureaucrat's Constructor called\n" ;
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