#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{

    public:
    FragTrap();
    FragTrap(const std::string name);
    FragTrap(const FragTrap& copy);
    FragTrap&operator=(const FragTrap& copy);
    void attack(const std::string &target);
    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
    void highFivesGuys();
    ~FragTrap();
};

#endif