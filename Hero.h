#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <string>
using namespace std;

class Hero {
protected:
    string heroName;
    int health;
    int basePower;

public:
    Hero(string name = "", int h = 0, int p = 0);
    virtual ~Hero();

    string getName() const;
    int getHealth() const;
    int getPower();

    void takeDamage(int dmg);

    bool operator>(Hero& other);
    int operator+(Hero& other);
};

#endif