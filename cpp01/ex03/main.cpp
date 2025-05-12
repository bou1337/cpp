#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    Weapon sword("Sword");
    Weapon axe("Axe");

    HumanA alice("Alice", sword); 
    alice.attack();  

    HumanB bob("Bob"); 
    bob.attack();  
    bob.setWeapon(axe);  
    bob.attack();  

    return 0;
}
