#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"

class Warrior : public Hero {
protected:
    int armorRating;

public:
    Warrior(string name = "", int h = 0, int p = 0, int armor = 0);

    int getArmor();
    int calculateEffectiveHealth();
};

#endif