#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << GREEN << "ClapTrap: default constructed." << RESET << std::endl;
    _name = "No name";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << GREEN << "ClapTrap: constructed with name '" << name << "'." << RESET << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << GREEN << "ClapTrap: copy constructed from '" << obj._name << "'." << RESET << std::endl;
    *this = obj;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << GREEN << "ClapTrap: assigned from '" << obj._name << "'." << RESET << std::endl;
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
        std::cout << GREEN << "ClapTrap " << _name << " has insufficient hit points or energy to perform an action." << RESET << std::endl;
    else
    {
        std::cout << GREEN << "ClapTrap " << _name << " attacks " << target << ", dealing " << _attackDamage << " damage." << RESET << std::endl;
        _energyPoints--;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints <= 0)
        std::cout << GREEN << "ClapTrap " << _name << " cannot take more damage (hit points are already 0)." << RESET << std::endl;
    else
    {
        std::cout << GREEN << "ClapTrap " << _name << " took " << amount << " damage." << RESET << std::endl;
        _hitPoints = _hitPoints - amount;
    }
    

}
void ClapTrap::beRepaired(unsigned int amount)
{

    if(_energyPoints <= 0 || _hitPoints <= 0)
        std::cout << GREEN << "ClapTrap " << _name << " has insufficient hit points or energy to repair." << RESET << std::endl;
    else
    {
        std::cout << GREEN << "ClapTrap " << _name << " repaired " << amount << " hit points." << RESET << std::endl;
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
    std::cout << GREEN << "ClapTrap: destructor called for '" << _name << "'." << RESET << std::endl;
}