#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute)
    : name(name), sign(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
    std::cout << "Form's Constructor called\n";
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &obj)
    : name(obj.name), sign(obj.sign), grade_to_sign(obj.grade_to_sign), grade_to_execute(obj.grade_to_execute)
{
    std::cout << "Form's Copy Constructor called\n";
}

AForm::~AForm()
{
    std::cout << "Form's Destructor called\n";
}

AForm &AForm::operator=(const AForm &obj)
{
    if (this != &obj)
    {
        this->sign = obj.sign;
    }
    std::cout << "Copy assignment operator called\n";
    return *this;
}

bool AForm::get_sign() const
{
    return sign;
}

int AForm::get_grade_sign() const
{
    return grade_to_sign;
}

int AForm::get_grade_execute() const
{
    return grade_to_execute;
}

std::string AForm::get_name() const
{
    return name;
}

void AForm::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > grade_to_sign)
        throw GradeTooLowException();
    sign = true;
}

void AForm::checkExecution(Bureaucrat const & executor) const
{
    if (!sign)
        throw NotSignedException();
    if (executor.getGrade() > grade_to_execute)
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Form: Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Form: Grade too low!";
}

const char* AForm::NotSignedException::what() const throw() {
    return "Form: Not signed!";
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
    os << "Form's name: " << obj.get_name()
       << ", status: " << (obj.get_sign() ? "signed" : "not signed")
       << ", grade to sign: " << obj.get_grade_sign()
       << ", grade to execute: " << obj.get_grade_execute() << "\n";
    return os;
}


