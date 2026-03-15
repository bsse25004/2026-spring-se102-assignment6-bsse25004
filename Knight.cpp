#include "Knight.h"

//--------------------Constructor----------------
Knight::Knight(string name, int h, int p, int armor,int charge):Warrior(name,h,p,armor){
    chargeBonus = charge;
}

//----------Member Functions------
//Getter:
int Knight::getChargeBonus(){
    return chargeBonus;
}
//calculating Burst Damage
int Knight::calculateBurstDamage(){
    int burstDamage = basePower + chargeBonus;
    return burstDamage;
}