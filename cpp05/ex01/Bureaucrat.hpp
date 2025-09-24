#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        std::string getName() const;
        int getGrade() const;
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat();
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
        void decrement();
        void increment();
        void signForm(Form &form) const;
};
        std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif