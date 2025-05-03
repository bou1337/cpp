#include "PhoneBook.hpp" 

PhoneBook::PhoneBook : c(x)() 
{}
{
    c= x ;
} ;


void PhoneBook ::add_contact()
{
    static int index ;
    contact[index%8].setter() ;
    index ++ ;
    if(c<8)
    c++ ;
}
int valid_index(std::string s)
{
    size_t i = 0;
    int index  ;
    if(s.empty())
    return -1 ;
    while (i <s.length())
    {
        if (s[i] > '7' || s[i] < '0') 
            return -1; 
        i++;
    }
    i = 0 ;
    while(i<s.length())
    {
        index =s[i] -'0' ;
        if(index>=8)
        return -1 ;
        i++ ;
    }
    return  index ;

}

void PhoneBook ::search_contact()
{
    if(c==0)
    {
        std::cout <<"no contact yet \n" ;
        return ;
    }

    std :: cout <<"| Index | First Name | Last Name | Nickname |\n" ;
    for(int i = 0 ; i<c ;i++)
    {
        contact[i].display_all(i) ;
    }
    std ::string index  ;
    std::cout <<"Enter Index To All Details\n" ;
    std::getline(std::cin ,index) ;
    if(std::cin.eof())
        {
        std ::cout <<"eof\n" ;
        exit(0);
        }

    while(valid_index(index)==-1|| valid_index(index)>=c)
    {
        std :: cout <<"invalid index try again\n" ;
         std ::getline(std ::cin ,index) ;
         if(std::cin.eof())
        {
        std ::cout <<"eof\n" ;
        exit(0);
        }

    }
    contact[valid_index(index)].display() ;

}