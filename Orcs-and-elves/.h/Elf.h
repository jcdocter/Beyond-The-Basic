#pragma once

#include <iostream>
#include <string>
#include "Npc.h"

class Elf : public NPC{
    private:
        std::string name;

    public:
        Elf();
        virtual ~Elf();

        std::string GetName();

        void Render();
};