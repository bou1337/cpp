#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Grade name"), sign(false), grade_to_sign(0), grade_to_execute(0)
{
    std::cout << "Form's default constructor called\n";
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute)
    : name(name), sign(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
    std::cout << "Form's Constructor called\n";
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &obj)
    : name(obj.name), sign(obj.sign), grade_to_sign(obj.grade_to_sign), grade_to_execute(obj.grade_to_execute)
{
    std::cout << "Form's Copy Constructor called\n";
}

Form &Form::operator=(const Form &obj)
{
    if (this != &obj)
    {
        this->sign = obj.sign;
    }
    std::cout << "Copy assignment operator called\n";
    return *this;
}

bool Form::get_sign() const
{
    return sign;
}

int Form::get_grade_sign() const
{
    return grade_to_sign;
}

int Form::get_grade_execute() const
{
    return grade_to_execute;
}

std::string Form::get_name() const
{
    return name;
}

void Form::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > grade_to_sign)
        throw GradeTooLowException();
    sign = true;
}

Form::~Form()
{
    std::cout << "Form's Destructor called\n";
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form: Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form: Grade too low!";
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    os << "Form's name: " << obj.get_name()
       << ", status: " << (obj.get_sign() ? "signed" : "not signed")
       << ", grade to sign: " << obj.get_grade_sign()
       << ", grade to execute: " << obj.get_grade_execute() << "\n";
    return os;
}


