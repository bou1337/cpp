#include   "Contact.hpp"
#include   <iostream>


bool isPrintableString(const std::string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] < 32 || str[i] > 126)
            return false;
    }
    return true;
}


void check_empty(std::string& s1, const std::string& prompt)
{
    while (s1.empty() || !isPrintableString(s1))
    {
        if (s1.empty())
            std::cout << prompt;
        else
            std::cout << "Input contains unprintable characters\n" << prompt;

        std::getline(std::cin, s1);

        if (std::cin.eof())
        {
            std::cout << "eof\n";
            exit(0);
        }
    }
}

void Contact ::setter() 
{
    std :: cout <<"Enter First Name\n" ;
    std ::getline(std :: cin,first_name);
    check_empty(first_name ,"Enter First Name\n" ) ;
    std :: cout <<"Enter Last name\n" ;
    std :: getline(std::cin,last_name) ;
     check_empty(last_name ,"Enter Last name\n" ) ;
    std :: cout <<"Enter Nickname\n" ;
    std :: getline(std::cin,nickname) ;
     check_empty(nickname ,"Enter Nickname\n" ) ;
    std :: cout <<"Enter Phone Number\n" ;
    std :: getline(std::cin,phone) ;
     check_empty(phone ,"Enter Phone Number\n" )  ;
    std :: cout <<"Enter Darkest Secret\n" ;
    std :: getline(std ::cin,darkest_secret) ;
    check_empty(darkest_secret ,"Enter Darkest Secret\n" ) ;
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