#include "npc.h"
#include "elf.h"
#include "orc.h"
#include "inventory.h"

string NPC::GetName() {
    return "NPC";
}

int NPC::GetStrength() {
    return 0;
}

void NPC::addToInventory(string itemToAdd) {
    inventory.items.push_back(itemToAdd);
}

string NPC::requestItem(int index) {
    return inventory.items.at(index);
}
