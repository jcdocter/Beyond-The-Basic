#include <iostream>
#include <Vector>

#include "Npc.h"
#include "Elf.h"
#include "Orc.h"


using namespace std;

void Render(vector<NPC*> npcs){
    for(auto& npc : npcs){
        cout << "---" << endl;
        npc->Render();
    }

    cout << "---" << endl;
}

int main(){
    std::vector<NPC*> npcs;

    NPC* npc1 = NPC::MakeMonster(new Orc());
    NPC* npc2 = NPC::MakeMonster(new Elf());


    npcs.push_back(npc1);
    npcs.push_back(npc2);

    Render(npcs);
}



