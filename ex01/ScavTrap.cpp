#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "| ScavTrap | -> Default constructor called" << std::endl;
    _name = "No name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _openGate = false;
}

ScavTrap::ScavTrap(std::string name):ClapTrap()
{
    std::cout << "| ScavTrap | -> Name constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _openGate = false;
}
ScavTrap::ScavTrap(const ScavTrap &obj):ClapTrap()
{
    std::cout << "| ScavTrap | -> Copy constructor called " << std::endl;
    *this = obj;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "| ScavTrap | -> Copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;    
        _attackDamage = obj._attackDamage;
    }
    return *this;
}


void ScavTrap::attack(const std::string& target)
{
    if(_energyPoints <= 0 || _hitPoints <= 0)
        std::cout << "ScavTrap doesn't have hit or energy points" << std::endl;
    else
    {
        std::cout << "ScavTrap "<< _name << " attacks " << target <<" causing "  << _attackDamage <<  " points of damage" << std::endl;
        _energyPoints--;
    }
}
void	ScavTrap::guardGate(void)
{
	if (this->_openGate == false)
	{
		_openGate = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate.\033[0m" << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "| ScavTrap | -> Name constructor called" << std::endl;
}