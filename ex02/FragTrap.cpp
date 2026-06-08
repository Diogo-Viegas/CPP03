#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << BLUE << "FragTrap -> Default Constructor Called" << RESET << std::endl;
    _name = "no name";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    std::cout << BLUE << "FragTrap -> constructed with name '" << name << "'." << RESET << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &obj):ClapTrap()
{
    std::cout << BLUE<< "FragTrap " << _name << "-> copy constructed from '" << obj._name << "'." << RESET<< std::endl;
    *this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
    std::cout << BLUE << "FragTrap " << _name << "-> assigned from '" << obj._name << "'." << RESET << std::endl;
    if(this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;    
        _attackDamage = obj._attackDamage;
    }
    return *this;
}
void FragTrap::attack(const std::string& target)
{
    if(_energyPoints <= 0 || _hitPoints <= 0)
        std::cout << BLUE << "FragTrap " << _name << " has insufficient hit points or energy to attack." << RESET << std::endl;
    else
    {
        std::cout << BLUE << "FragTrap " << _name << " attacks " << target << ", dealing " << _attackDamage << " damage." << RESET << std::endl;
        _energyPoints--;
    }
}
void FragTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints <= 0)
        std::cout << BLUE << "FragTrap " << _name << " cannot take more damage (hit points are already 0)." << RESET << std::endl;
    else
    {
        std::cout << BLUE << "FragTrap " << _name << " took " << amount << " damage." << RESET << std::endl;
        _hitPoints = _hitPoints - amount;
    }
    

}
void FragTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints <= 0 || _hitPoints <= 0)
        std::cout << BLUE << "FragTrap " << _name << " has insufficient hit points or energy to repair." << RESET << std::endl;
    else
    {
        std::cout << BLUE << "FragTrap " << _name << " repaired " << amount << " hit points." << RESET << std::endl;
        setHitPoints(_hitPoints + amount);    
        _energyPoints--;
    }   
}
void FragTrap::highFivesGuys()
{
    std::cout << BLUE << "FragTrap " << _name << " : GIVE ME FIVE, GUYS!" << RESET << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << BLUE << "FragTrap " << _name << "-> Destructor Called" << RESET << std::endl;
}