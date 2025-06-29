#ifndef AFORM_H
#define AFORM_H
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool sign;
    const int grade_to_sign;
    const int grade_to_execute;
    // No target here; each derived class has its own target

public:
    AForm() ;
    AForm(std::string name, int grade_to_sign, int grade_to_execute);
    AForm(const AForm &obj);
    AForm &operator=(const AForm &obj);
    virtual ~AForm();

    std::string get_name() const;
    bool get_sign() const;
    int get_grade_sign() const;
    int get_grade_execute() const;
    void beSigned(const Bureaucrat &obj);

    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception { public: const char *what() const noexcept override; };
    class GradeTooLowException : public std::exception { public: const char *what() const noexcept override; };
    class NotSignedException : public std::exception { public: const char *what() const noexcept override; };

protected:
    void  checkExecution(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);
#endif