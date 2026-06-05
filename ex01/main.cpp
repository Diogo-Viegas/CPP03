#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ClapTrap A("Diogo");
    A.attack("João");
    ScavTrap a("António");
    a.guardGate();
    A.beRepaired(50);
    a.guardGate();
    A.takeDamage(1000);
    A.beRepaired(20);
    a.beRepaired(1000);
    a.attack("José");
    return (0);
}