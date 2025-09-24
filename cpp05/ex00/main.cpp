#include "Bureaucrat.hpp"

int main() {
    try {
        
        //Bureaucrat obj("Bureaucrat1", 1500);
        //Bureaucrat obj("Bureaucrat1", 0);
        Bureaucrat obj1("Bureaucrat1",150);
        std::cout << obj1.getGrade() << "\n";
        std::cout << obj1.getName() << "\n";
        std::cout << obj1;
        obj1.increment();
        std::cout << obj1;
        obj1.increment();
        std::cout << obj1;
        Bureaucrat obj2(obj1);
        std::cout << obj2.getGrade() << "\n";
        std::cout << obj2.getName() << "\n";
        obj1 = obj2;
        obj1.decrement() ;
        std::cout <<obj1 ;
        obj1.decrement() ;
        std::cout <<obj1 ;
        obj1.decrement() ;
        
        std::cout << obj1.getGrade() << "\n";
        std::cout << obj1.getName() << "\n";
    }
    catch (const std::exception &e) {
        std::cout << "Exception handling: " << e.what() << "\n";
    }
}
