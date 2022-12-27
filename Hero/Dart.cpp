#include "Dart.h"

Dart::Dart(){

    setName("Dart");
    setHealth(512.86);
    setMana(117.4);
    setDamage(56);
    
}
void Dart::doubleDamage(Hero enemy){
    enemy.decreaseHealth(2*Dart::getDamage());
}

Dart::~Dart(){

}