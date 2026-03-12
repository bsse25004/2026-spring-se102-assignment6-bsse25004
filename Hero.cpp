#include "Hero.h"

Hero::Hero(string name,int h,int p){
    heroName = name;
    health = h;
    basePower = p;
}
Hero::~Hero(){}

string Hero::getName() const{
    return heroName;
}
int Hero::getHealth() const{
    return health;
}
int Hero::getPower(){
    return basePower;
}

void Hero::takeDamage(int dmg){
    health -= dmg;
    if(health<0){
        health = 0;
        return;
    }
}

bool Hero::operator>(Hero& other){
    if(basePower > other.basePower){
        return true;
    } 
    return false;
}
int Hero::operator+(Hero& other){
    int h = health + other.health;
    return h;
}