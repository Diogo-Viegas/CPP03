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
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy constructor called " << std::endl;
    *this = obj;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;    
        _attackDamage = obj._attackDamage;
    }
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    if(_energyPoints <= 0 || _hitPoints <= 0)
        std::cout << "Clap Trap doesn't have hit or energy points" << std::endl;
    else
    {
        std::cout << "ClapTrap "<< _name << " attacks " << target <<" causing "  << _attackDamage <<  " points of damage" << std::endl;
        _energyPoints--;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints <= 0)
        std::cout << "Clap Trap can't take more damage, is already dead" << std::endl;
    else
    {
        std::cout << "Clap Trap " << _name << " took " << amount << " points of damage" << std::endl;
        _hitPoints = _hitPoints - amount;
    }
    

}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints <= 0 || _hitPoints <= 0)
        std::cout << "Clap Trap " << _name << " doesn't have hit or energy points" << std::endl;
    else
    {
        std::cout << "Clap Trap " << _name << " Repaired himself" << std::endl;
        setHitPoints(_hitPoints + amount);    
        _energyPoints--;
    }   
   
}
void ClapTrap::setHitPoints(unsigned int amount)
{
    _hitPoints = amount;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}