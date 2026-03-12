#include  "Guild.h"

Guild::Guild(string name){
    guildName = name;
    memberCount = 0;
    for(int i=0;i<15;i++){
        roster[i] = nullptr;
    }
}

Guild::~Guild(){
    cout<<"The guild Gondor has been disbanded!"<<endl;
}

int Guild::getMemberCount()const{
    return memberCount;
}
int Guild::calculateTotalGuildPower(){
    int total = 0;
    for(int i=0;i<memberCount;i++){
        total += roster[i]->getPower();
    }
    return total;
}
void Guild::displayGuildStats(){

    cout<<"Guild Name: "<<guildName<<endl;
    cout<<"Total Members: "<<memberCount<<"/15"<<endl;
    cout<<"Total Guild Power: "<<calculateTotalGuildPower()<<endl;
}

void Guild::operator+=(Hero* hero){
    
    if(memberCount<15){
        roster[memberCount] = hero;
        memberCount++;
        return;
    }   
    cout<<"Guild is at full capacity!"<<endl;
}
ostream& operator<<(ostream& out, Guild& g){
    out<<"Guild: "<<g.guildName<<endl;
    out<<"Members: "<<g.memberCount<<endl;
    for(int i=0;i<g.memberCount;i++){
        out<<"- "<<g.roster[i]->getName()<<" ";
        out<<"(Power: "<<g.roster[i]->getPower()<<")"<<endl;
    }
    return out;
}