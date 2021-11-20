#include "Decorator.h"

Decorator::Decorator(NPC* _npc) {
    npc = _npc;
}

Decorator::~Decorator() {
    if(npc) delete npc;
}

void Decorator::Render() {
    npc->Render();
}

