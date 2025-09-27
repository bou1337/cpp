#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string target;
public:
    ShrubberyCreationForm() ;
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm & operator=(ShrubberyCreationForm &obj) ;
    ShrubberyCreationForm(ShrubberyCreationForm &obj) ;
    ~ShrubberyCreationForm();
    
    void execute(Bureaucrat const & executor) const ;
};

#endif  