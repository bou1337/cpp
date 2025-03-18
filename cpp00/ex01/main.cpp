#include  "PhoneBook.hpp"



int  main()
{

    PhoneBook  PhoneBook(0) ;
    std :: string command  ;

    while(1)
    {

        std :: cout <<"Enter Command(ADD,SEARCH,EXIT)\n" ;
        std ::getline(std::cin,command) ;
        if(command=="ADD")
        PhoneBook.add_contact() ;
        else if(command =="SEARCH")
        PhoneBook.search_contact() ;
        else if(command=="");
        else if(command=="EXIT") 
            break ;
        else 
        std :: cout <<"invalid command\n" ; 
    }

}