#ifndef INTERN_H
#define INTERN_H
#include <string>
#include "AForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &);
    Intern &operator=(const Intern &);
    ~Intern();

    AForm *makeForm(const std::string &formName, const std::string &target) const;
};

#endif