#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"

class Knight : public Warrior {
private:
    int chargeBonus;

public:
    Knight(string name = "", int h = 0, int p = 0, int armor = 0, int charge = 0);

    int getChargeBonus();
    int calculateBurstDamage();
};

#endif