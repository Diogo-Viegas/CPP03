#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
class ClapTrap
{
    private:
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
//when ClapTrap attacks, it causes its target to lose <attack damage> hit points;
//when ClapTrap repairs itself, it regains <amount> hit points
//attacking and reparings costs 1 energy points each.
//ClapTrap can't do anything if it has no energy points or hit points.
// the ClapTrap instances should not interact directly with one another, and the parameters will not refer to another instance of ClapTrap
//attack () - > ClapTrap <name> attacks <target>, causing <damage> points of damage
#endif