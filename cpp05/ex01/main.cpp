#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
       // Form Form11("Form1", 12, 0);
       // Form Form111("Form1", 12, 200);
        Form Form1("Form1", 12, 20);
        std::cout << Form1;
        Bureaucrat Bur1("Bur1", 2);
        Bureaucrat Bur2("Bur2",31) ;
        std::cout << Bur1;
        Bur1.signForm(Form1);
        Bur2.signForm(Form1);
        std::cout << Form1;
        Form Form2("Form2", 10, 10);
        std::cout << Form2;
        //Form Form1("Form1", 12, 20);

    }
    catch(const std::exception &e)
    {
        std::cout << "exception " << e.what() << "\n";
    }
}