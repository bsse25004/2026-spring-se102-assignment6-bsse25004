#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include "Warrior.h"
#include "MagicalEntity.h"

class Spellblade : public Warrior, public MagicalEntity {
public:
    Spellblade(string name = "", int h = 0, int p = 0, int armor = 0, int mana = 0, int spell = 0);

    int calculateHybridDamage();
};

#endif