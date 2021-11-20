#include "RoleDecorator.h"

RoleDecorator::RoleDecorator(NPC* _npc) : Decorator(_npc) {

}

RoleDecorator::~RoleDecorator() {

}

void RoleDecorator::Render() {
    Decorator::Render();

    std::cout << "new role has been added" << std::endl;
}

