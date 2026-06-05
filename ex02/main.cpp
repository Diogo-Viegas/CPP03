#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    ClapTrap A("Diogo");
    A.attack("João");
    ScavTrap a("António");
    FragTrap C("John Cena");
    a.guardGate();
    A.beRepaired(50);
    a.guardGate();
    A.takeDamage(1000);
    A.beRepaired(20);
    a.beRepaired(1000);
    a.attack("José");
    C.beRepaired(20);
    C.attack("Pikachu");
    C.HighFiveGuys();
    return (0);
}