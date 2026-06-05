#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap : ClapTrap
{

    public:
    FragTrap();
    FragTrap(const std::string Name);
    FragTrap(const FragTrap& copy);
    FragTrap&operator=(const FragTrap& copy);
    void attack(const std::string &target);
    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
    void HighFiveGuys();
    ~FragTrap();
};

#endif