#include "Spellblade.h"

Spellblade::Spellblade(string name, int h, int p, int armor, int mana, int spell):MagicalEntity(mana,spell){}

int Spellblade::calculateHybridDamage(){
    int hybridDamage = basePower + spellPower;
    return hybridDamage;
}