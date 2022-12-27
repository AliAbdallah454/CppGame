#include <string>

#ifndef HERO_H
#define HERO_H

#pragma once

using std::string;

class Hero{
public:
    Hero();

    void setName(string name);
    void setDamage(double damage);
    void setHealth(double health);
    void setMana(double mana);
    void setResistance(double resistance);

    string getName();
    double getDamage();
    double getHealth();
    double getMana();
    double getResistance();

    ~Hero();

private:

    string name;
    double health;
    double mana;
    double damage; 
    double resistance = 0.25;   

};

#endif