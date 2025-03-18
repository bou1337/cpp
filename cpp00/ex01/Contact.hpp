#ifndef  CONTACT_H
#define  CONTACT_H

#include  <iostream>
#include <iomanip>

class Contact 
{

    private :

    std :: string first_name ;
    std :: string  last_name ;
    std :: string  nickname ;
    std :: string  phone ;
    std :: string darkest_secret ;
    public :
    void setter() ;
    void display()  ;
    void display_all(int index) ;
};
#endif