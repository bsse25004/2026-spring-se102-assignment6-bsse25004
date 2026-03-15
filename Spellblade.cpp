#include "Spellblade.h"

//------------------Constructor-----------------
Spellblade::Spellblade(string name, int h, int p, int armor, int mana, int spell):MagicalEntity(mana,spell){}

//Member Function:
//calculating Hybrid Damage
int Spellblade::calculateHybridDamage(){
    int hybridDamage = basePower + spellPower;
    return hybridDamage;
}