#ifndef FORM_H
#define FORM_H
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        std::string name;
        bool sign;
        const int grade_to_sign;
        const int grade_to_execute;

    public:
        Form();
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        bool get_sign() const;
        int get_grade_sign() const;
        int get_grade_execute() const;
        std::string get_name() const;
        void beSigned(const Bureaucrat &obj);
        ~Form();

        class GradeTooHighException : public std::exception
        {
            public:
            const char *what() const noexcept override;
        };
        class GradeTooLowException : public std::exception
        {
            public:
            const char *what() const noexcept override;
        };
};
std::ostream &operator<<(std::ostream &os, const Form &obj);
#endif