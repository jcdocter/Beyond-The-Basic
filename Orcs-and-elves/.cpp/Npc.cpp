#include "Npc.h"
#include "Orc.h"
#include "Elf.h"
#include "RoleDecorator.h"

NPC::NPC() {

}

NPC::~NPC() {

}

NPC* NPC::MakeMonster() {
    NPC* npc;

    NPC* orc = new RoleDecorator(new Orc());
    NPC* elf = new RoleDecorator(new Elf());

    return orc, elf;
}
