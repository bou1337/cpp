#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"
#include <string>


class  PhoneBook
{
    private :
    Contact contact[8] ;
    int c ;

    public :
    PhoneBook(int x) ;
    void add_contact() ;
    void search_contact() ;
} ;
#endif