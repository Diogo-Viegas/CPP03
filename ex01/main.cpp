#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ClapTrap A("A");
    A.attack("B");
    ScavTrap B("B");
    B.guardGate();
    A.beRepaired(50);
    B.guardGate();
    A.takeDamage(1000);
    A.beRepaired(20);
    B.beRepaired(1000);
    B.attack("José");
    return (0);
}