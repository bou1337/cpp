#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm() ;
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &obj) ;
    RobotomyRequestForm & operator=(RobotomyRequestForm &obj) ;
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const ;
};

#endif