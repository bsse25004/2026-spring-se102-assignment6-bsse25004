#include "Warrior.h"

//---------------Constructor---------------
Warrior::Warrior(string name, int h, int p, int armor):Hero(name,h,p){
    armorRating = armor;
}

//--------------Member Functions---------------
//Getter:
int Warrior::getArmor(){
    return armorRating;
}
//calculating Effective Health:
int Warrior::calculateEffectiveHealth(){
    int EffectiveHealth = health + (armorRating * 2);
    return EffectiveHealth;
}
