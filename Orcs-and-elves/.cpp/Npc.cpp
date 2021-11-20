#include "Npc.h"
#include "Orc.h"
#include "Elf.h"
#include "RoleDecorator.h"

NPC::NPC() {

}

NPC::~NPC() {

}

NPC* NPC::MakeMonster(NPC* _npc) {
    NPC* npc;

    npc = new RoleDecorator(_npc);

    return npc;
}
