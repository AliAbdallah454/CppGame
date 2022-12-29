#ifndef STINGER_H
#define STINGER_H

#include "Hero.h"

#pragma once

class Stinger : public Hero{
public:

    Stinger();
    void blockDamage();
    void critSteal(Hero &enemy);

    ~Stinger();

    double blockDamageManaCost = 40;
    double critStealHeal = 0.1;

private:

};

#endif