#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {  
     std:: cout<<"Destructor called\n" ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor);
    std::cout << "* Drilling noises *" << std::endl;
    std::srand(std::time(0));
    if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << target << "!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm()
{
    std:: cout<<"Default constructor called\n" ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{   (void)obj ;
    std::cout<<"Assignment operator called\n" ;
    return  *this ;
}
 RobotomyRequestForm ::RobotomyRequestForm(RobotomyRequestForm & obj ) :AForm("RobotomyRequestForm", 72, 45), target(obj.target)
 {  (void)obj ;
    std:: cout<<"Copy constructor called \n" ;

 }

