#include "Hero.h"

Hero::Hero(){

}

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

Hero::~Hero(){

}