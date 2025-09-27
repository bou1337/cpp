#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;
public:
    PresidentialPardonForm() ;
    PresidentialPardonForm(PresidentialPardonForm &obj) ;
    PresidentialPardonForm  &  operator=(PresidentialPardonForm & obj) ;
    PresidentialPardonForm(std::string target);  
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const ;
};

#endif