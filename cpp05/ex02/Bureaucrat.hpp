#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <iostream>

class AForm;

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &obj);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void increment();
    void decrement();

    void signForm(AForm &form) const;
    void executeForm(AForm const & form) const;

    class GradeTooHighException : public std::exception { public: const char *what() const throw(); };
    class GradeTooLowException : public std::exception { public: const char *what() const throw(); };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);
#endif