

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.hpp"
class   FragTrap : public ClapTrap
{
    public :
    FragTrap() ;
    FragTrap(std :: string name) ;
    FragTrap(FragTrap &obj) ;
    FragTrap & operator=(FragTrap &obj) ;
    ~FragTrap() ;
    void highFivesGuys(void);

} ;
#endif