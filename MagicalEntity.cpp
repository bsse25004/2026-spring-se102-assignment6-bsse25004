#include "MagicalEntity.h"

//---------------Constructor-------------
MagicalEntity::MagicalEntity(int mana, int spell){
    spellPower = spell;
    manaPool = mana;
}

int MagicalEntity::getMana() const{
    return manaPool;
}

int MagicalEntity::getSpellPower() const{
    return spellPower;
}