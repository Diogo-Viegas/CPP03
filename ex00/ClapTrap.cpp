#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    _name = "No name";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Name constructor called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}
std::string ClapTrap::getName()
{
    return (_name);
}
int ClapTrap::getDamage()
{
    return (_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap "<< this->getName() << "attacks " << target <<" causing "  << this->getDamage() <<  " points of damage" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}