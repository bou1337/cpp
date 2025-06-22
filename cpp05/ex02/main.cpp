#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat bob("Bob", 1);
        Bureaucrat joe("Joe", 140);

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

        bob.signForm(pardon);
        bob.executeForm(pardon);

        // Try to execute unsigned form
        ShrubberyCreationForm failShrub("fail");
        bob.executeForm(failShrub);

        // Try to sign with too low grade
        joe.signForm(pardon);

        // Try to execute with too low grade
        joe.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}