#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << RED << "ScavTrap: default constructed." << RESET << std::endl;
    _name = "No name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _openGate = false;
}

ScavTrap::ScavTrap(std::string name):ClapTrap()
{
    std::cout << RED << "ScavTrap: constructed with name '" << name << "'." << RESET << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _openGate = false;
}
ScavTrap::ScavTrap(const ScavTrap &obj):ClapTrap()
{
    std::cout << RED<< "ScavTrap: copy constructed from '" << obj._name << "'." << RESET<< std::endl;
    *this = obj;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << RED << "ScavTrap: assigned from '" << obj._name << "'." << RESET << std::endl;
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
        std::cout << RED << "ScavTrap " << _name << " has insufficient hit points or energy to attack." << RESET << std::endl;
    else
    {
        std::cout << RED << "ScavTrap " << _name << " attacks " << target << ", dealing " << _attackDamage << " damage." << RESET << std::endl;
        _energyPoints--;
    }
}
void ScavTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints <= 0)
        std::cout << RED << "ScavTrap " << _name << " cannot take more damage (hit points are already 0)." << RESET << std::endl;
    else
    {
        std::cout << RED << "ScavTrap " << _name << " took " << amount << " damage." << RESET << std::endl;
        _hitPoints = _hitPoints - amount;
    }
    

}
void ScavTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints <= 0 || _hitPoints <= 0)
        std::cout << RED << "ScavTrap " << _name << " has insufficient hit points or energy to repair." << RESET << std::endl;
    else
    {
        std::cout << RED << "ScavTrap " << _name << " repaired " << amount << " hit points." << RESET << std::endl;
        setHitPoints(_hitPoints + amount);    
        _energyPoints--;
    }   
}

void	ScavTrap::guardGate(void)
{
	if (this->_openGate == false)
	{
		_openGate = true;
		std::cout << RED << "ScavTrap " << _name << " is now guarding the gate." << RESET << std::endl;
	}
	else
		std::cout << RED << "ScavTrap " << _name << " is already guarding the gate." << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap: destructor called for '" << _name << "'." << RESET << std::endl;
}