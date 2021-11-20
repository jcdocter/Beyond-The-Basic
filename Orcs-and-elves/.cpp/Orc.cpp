#include "Npc.h"
#include "Orc.h"

Orc::Orc() {
}

Orc::~Orc() {

}

std::string Orc::GetName() {
    name = "Orc";
    return name;
}

void Orc::Render() {
    std::cout << "The name is: " << this->GetName() << " and my role is " << this->role1 << std::endl;
}
