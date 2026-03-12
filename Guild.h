#ifndef GUILD_H
#define GUILD_H
#include <iostream>
#include "Hero.h"

using namespace std;
class Guild {
private:
    string guildName;
    Hero* roster[15];
    int memberCount;

public:
    Guild(string name = "");
    ~Guild();

    int calculateTotalGuildPower();
    void displayGuildStats();
    int getMemberCount()const;

    void operator+=(Hero* hero);

    friend ostream& operator<<(ostream& out, Guild& g);
};

#endif