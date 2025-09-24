#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) 
{
    std::cout <<name<<"s Default Constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{   
    std::cout << name <<"'s Constructor called\n";
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    

    
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) {
    std::cout << "Bureaucrat copy constructor called" ;
}

Bureaucrat::~Bureaucrat() {
      std::cout << name<<"'s Destructor called\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
    {
        this->grade = obj.grade;
        this->name = obj.name ;
    }
    std::cout <<name<<"'s operator assignment called\n";
    return *this;
}

std::string Bureaucrat::getName() const { return name; }
int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::increment()
{
    if (grade <= 1)
        throw GradeTooHighException();
    --grade;
}

void Bureaucrat::decrement()
{
    if (grade >= 150)
        throw GradeTooLowException();
    ++grade;
}

void Bureaucrat::signForm(AForm &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.get_name() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << " couldn't sign " << form.get_name() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.get_name() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << " couldn't execute " << form.get_name() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() { return "Bureaucrat: Grade too high!"; }
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "Bureaucrat: Grade too low!"; }

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}
