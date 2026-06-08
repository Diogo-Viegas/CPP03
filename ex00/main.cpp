#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("A");
    ClapTrap B;
    A.attack("B");
    A.takeDamage(10);
    A.beRepaired(2);
    B.attack("A");
    B.takeDamage(10);
    B.beRepaired(2);
    return (0);
}