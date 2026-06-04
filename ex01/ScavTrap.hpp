#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap
{
    private:

    public:
    ScavTrap();
    ScavTrap(const ScavTrap& copy);
    ScavTrap& operator=(const ScavTrap& copy);
    ~ScavTrap();
    void attack(std::string &target);
    void guardGate();
};


#endif