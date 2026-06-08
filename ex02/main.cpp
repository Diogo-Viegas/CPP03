#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    ClapTrap A("A");
    ScavTrap B("B");
    FragTrap C("C");
    A.attack("B");
    B.guardGate();
    A.beRepaired(50);
    B.guardGate();
    A.takeDamage(1000);
    A.beRepaired(20);
    B.beRepaired(1000);
    B.attack("José");
    C.beRepaired(20);
    C.attack("Pikachu");
    C.highFivesGuys();
    return (0);
}