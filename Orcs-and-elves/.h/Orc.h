#pragma once

#include <iostream>
#include <string>
#include "Npc.h"

class Orc : public NPC{
    private:
        std::string name;

    public:
        Orc();
        virtual ~Orc();

        std::string GetName();
        void Render();
};
