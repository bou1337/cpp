#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat's Default Constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    std::cout << "Bureaucrat's Constructor called\n";
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade)
{
    std::cout << "Bureaucrat's copy constructor called\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
    {
        // name is not assigned if it's const, otherwise:
        this->name = obj.name;
        this->grade = obj.grade;
    }
    std::cout << "Bureaucrat's operator assignment called\n";
    return *this;
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat's Destructor called\n";
}

const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
    return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << " bureaucrat grade " << obj.getGrade() << "\n";
    return os;
}

void Bureaucrat::decrement()
{
    grade++;
    if (grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::increment()
{
    grade--;
    if (grade < 1)
        throw GradeTooHighException();
}