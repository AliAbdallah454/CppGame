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

    string getName();
    double getDamage();
    double getHealth();
    double getMana();

    ~Hero();

private:

    string name;
    double health;
    double mana;
    double damage;   

};

#endif