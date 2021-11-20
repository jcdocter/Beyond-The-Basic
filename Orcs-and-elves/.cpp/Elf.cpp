#include "Elf.h"

Elf::Elf() {

}

Elf::~Elf(){

}

std::string Elf::GetName() {
    name = "Elf";
    return name;
}

void Elf::Render() {
    std::cout << "The name is: " << this->GetName() << " and my role is " << this->role1 << std::endl;
}



