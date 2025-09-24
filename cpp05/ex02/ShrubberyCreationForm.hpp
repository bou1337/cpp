#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string target;
public:
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const ;
};

#endif  