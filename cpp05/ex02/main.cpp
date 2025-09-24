#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat bob("Bob", 149);
        Bureaucrat joe("Joe", 2);
        
        ShrubberyCreationForm shrub("garden");
        RobotomyRequestForm robo("Bender");
        PresidentialPardonForm pardon("Ford Prefect");

        std::cout << shrub << std::endl;
        std::cout << robo << std::endl;
        std::cout << pardon << std::endl;

        joe.signForm(shrub);
        joe.executeForm(shrub);
        
        bob.signForm(robo);
        bob.executeForm(robo);
        std::cout<<shrub.get_sign() <<"\n" ;
        bob.signForm(pardon);
        bob.executeForm(pardon);    
        ShrubberyCreationForm failShrub("fail");
        bob.executeForm(failShrub);

        joe.signForm(pardon);
        joe.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}