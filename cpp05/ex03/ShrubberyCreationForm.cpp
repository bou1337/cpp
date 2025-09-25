#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm()
{
    std:: cout <<"Default constructor\n" ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137),target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {
     std:: cout<<"Destructor called\n" ;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor);
    std::ofstream ofs((target + "_shrubbery").c_str());

    ofs << "        🌲\n"
           "       /\\\n"
           "      /**\\\n"
           "     /****\\\n"
           "    /******\\\n"
           "   /********\\\n"
           "  /**********\\\n"
           "       ||\n"
           "       ||\n";

    ofs.close();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{   (void)obj ;
    std ::cout<<"Assignment  operator called\n" ;
    return *this ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj): AForm("ShrubberyCreationForm", 145, 137) , target(obj.target) 
{   (void)obj ;
    std::cout<<"Copy constructor called\n" ;
   // this->target = obj.target ;
}