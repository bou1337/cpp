#include   "Contact.hpp"
#include   <iostream>


void Contact ::setter()
{
    std :: cout <<"Enter First Name\n" ;
    std ::getline(std :: cin,first_name);
    std :: cout <<"Enter Last name\n" ;
    std :: getline(std::cin,last_name) ;
    std :: cout <<"Enter Nickname\n" ;
    std :: getline(std::cin,nickname) ;
    std :: cout <<"Enter Phone Number\n" ;
    std :: getline(std::cin,phone) ;
    std :: cout <<"Enter Darkest Secret\n" ;
    std :: getline(std ::cin,darkest_secret) ;
}
std :: string  format_string(std :: string str)
{

    if(str.length() > 10)
    return (str.substr(0,9)+'.') ;
    return str  ;
}
void Contact ::display()
{
    std :: cout <<"First Name: " ;
    std :: cout <<first_name<<"\n" ;
    std :: cout << "Last Name: " ;
    std :: cout <<last_name<<"\n" ;
    std :: cout <<"Nickename: " ;
    std :: cout <<nickname<<"\n" ;
    std :: cout <<"Phone NUmber: " ;
    std :: cout <<phone<<"\n" ;
    std :: cout <<"Darkest Secret: ";
    std :: cout <<darkest_secret<<"\n" ;
}
void Contact::display_all(int index)
{

    std ::cout <<'|'<< std:: setw(10) << index <<'|';
    std ::cout << std:: setw(10) << format_string(first_name)<<'|' ;
    std ::cout << std:: setw(10) << format_string(last_name) <<'|' ;
    std :: cout << std ::setw(10) <<format_string(nickname)<<'|'<<"\n" ;
}