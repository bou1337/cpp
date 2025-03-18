#include "PhoneBook.hpp" 

PhoneBook::PhoneBook(int x)
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
    int i = 0;
    while (i < s.length())
    {
        if (s[i] > '9' || s[i] < '0') 
            return -1; 
        i++;
    }

    int n = std::stoi(s)   ;  
    return n;  
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

    if(valid_index(index)==-1|| valid_index(index)>=c)
    {
        std :: cout <<"invalid index\n" ;
        return ;
    }
    contact[valid_index(index)].display() ;

}