#ifndef DART_H
#define DART_H

#include "Hero.h"

#pragma once

class Dart : public Hero{
public:

    Dart();
    void doubleDamage(Hero &enemy);
    void takeDamage(Hero &enemy);
    ~Dart();

    double doubleDamageManaCost = 45;
    double takeDamageManaCost = 80;
    double takeDamageHealthCost = 0.15;

private:
    
};

#endif