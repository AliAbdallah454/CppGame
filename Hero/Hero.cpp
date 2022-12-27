#include "Hero.h"

Hero::Hero(){

}

//setters

void Hero::setName(string name){
    this->name = name;
}
void Hero::setDamage(double damage){
    this->damage = damage;
}
void Hero::setHealth(double health){
    this->health = health;
}
void Hero::setMana(double mana){
    this->mana = mana;
}
void Hero::setResistance(double resistance){
    this->resistance = resistance;
}


//getters

string Hero::getName(){
    return this->name;
}
double Hero::getDamage(){
    return this->damage;
}
double Hero::getHealth(){
    return this->health;
}
double Hero::getMana(){
    return this->mana;
}
double Hero::getResistance(){
    return this->resistance;
}


void Hero::decreaseHealth(double amountTaken){
    setHealth(getHealth() - amountTaken);
}

Hero::~Hero(){

}