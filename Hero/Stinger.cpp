#include "Stinger.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::string;
using std::cout;
using std::endl;
using std::time;
using std::rand;
using std::srand;

Stinger::Stinger(){

    setName("Stinger");
    setHealth(600);
    setMana(100);
    setDamage(100);

}

void Stinger::blockDamage(){

    if(getMana() >= Stinger::blockDamageManaCost){
        setResistance(0.85);
        Stinger::decreaseMana(blockDamageManaCost);
    }
    else{
        cout << "not enough mana" <<endl;
    }
}

void Stinger::critSteal(Hero &enemy){

    srand(time(nullptr));
    bool randomBoolean = rand() < RAND_MAX * 0.25;
    if(randomBoolean){
        Stinger::setHealth(Stinger::getHealth() - enemy.getHealth() * critStealHeal);
        enemy.decreaseHealth(2.5*Stinger::getDamage());
        Stinger::setHealth(Stinger::getHealth() + enemy.getHealth() * critStealHeal);
    }
}

Stinger::~Stinger(){

}