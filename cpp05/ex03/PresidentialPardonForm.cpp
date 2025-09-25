#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm :: PresidentialPardonForm()
{
    std:: cout <<"Default constructor called \n" ;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5), target(target) {
        std:: cout <<"constructor called\n" ;
    }

PresidentialPardonForm :: PresidentialPardonForm(PresidentialPardonForm &obj): AForm("PresidentialPardonForm", 25, 5), target(obj.target)
{   (void)obj ;
    std:: cout <<"copy constructor called\n" ;
}
PresidentialPardonForm & PresidentialPardonForm ::operator=(PresidentialPardonForm &obj)
{   (void)obj ;
    std::cout <<"assignment  operator called \n" ;
    return  *this ;
}
PresidentialPardonForm::~PresidentialPardonForm() {
    std:: cout<<"Destructor called\n" ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}