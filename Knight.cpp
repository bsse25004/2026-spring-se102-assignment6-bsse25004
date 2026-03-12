#include "Knight.h"

Knight::Knight(string name, int h, int p, int armor,int charge):Warrior(name,h,p,armor){
    chargeBonus = charge;
}

int Knight::getChargeBonus(){
    return chargeBonus;
}
int Knight::calculateBurstDamage(){
    int burstDamage = basePower + chargeBonus;
    return burstDamage;
}