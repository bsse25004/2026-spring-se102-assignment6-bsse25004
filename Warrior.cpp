#include "Warrior.h"

Warrior::Warrior(string name, int h, int p, int armor):Hero(name,h,p){
    armorRating = armor;
}

int Warrior::getArmor(){
    return armorRating;
}
int Warrior::calculateEffectiveHealth(){
    int EffectiveHealth = health + (armorRating * 2);
    return EffectiveHealth;
}
