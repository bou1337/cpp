#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    Weapon sword("Sword");
    Weapon axe("Axe");

    HumanA alice("Alice", sword);  // Alice has a sword
    alice.attack();  // Alice attacks with their Sword

    HumanB bob("Bob");  // Bob has no weapon initially
    bob.attack();  // Bob has no weapon to attack with
    bob.setWeapon(axe);  // Bob is now armed with an axe
    bob.attack();  // Bob attacks with their Axe

    return 0;
}
