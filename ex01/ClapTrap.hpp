#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#define RESET   "\033[0m"
#define RED "\033[31m"
#define GREEN   "\033[32m"
#define AMARELO "\033[33m"
#define AZUL    "\033[34m"
class ClapTrap
{
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap& copy);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int);

        void setHitPoints(unsigned int amount);

};

#endif