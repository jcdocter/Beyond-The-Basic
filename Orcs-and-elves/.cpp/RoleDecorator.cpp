#include "RoleDecorator.h"

RoleDecorator::RoleDecorator(NPC* _npc) : Decorator(_npc) {

}

RoleDecorator::~RoleDecorator() {

}

void RoleDecorator::Render() {
    Decorator::Render();

    std::cout << "the roles that i have are: "<< role1 << ", " << role2 << ", " << role3 << std::endl;
}

