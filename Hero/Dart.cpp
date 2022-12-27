#include "Dart.h"
#include <iostream>

using std::cout;
using std::endl;

Dart::Dart(){

    setName("Dart");
    setHealth(512.86);
    setMana(117.4);
    setDamage(56);
    
}
 

void Dart::doubleDamage(Hero enemy){
    
    if(getMana() >= Dart::doubleDamageManaCost){
        enemy.decreaseHealth(2*Dart::getDamage());
        Dart::decreaseMana(doubleDamageManaCost);
    }
    else{
        cout << "not enough mana" <<endl;
    }
}

void Dart::takeDamage(Hero enemy){
    
    if(getMana() >= Dart::takeDamageManaCost){
        Dart::decreaseHealth(takeDamageHealthCost * getHealth());
        Dart::setDamage(0.65 * enemy.getDamage());
        Dart::decreaseMana(takeDamageManaCost);
    }
    else{
        cout << "not enough mana" <<endl;
    }
}

Dart::~Dart(){

}