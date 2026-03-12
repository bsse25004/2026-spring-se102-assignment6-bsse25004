#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

class MagicalEntity {
protected:
    int manaPool;
    int spellPower;

public:
    MagicalEntity(int mana = 0, int spell = 0);

    int getMana() const;
    int getSpellPower() const;
};

#endif