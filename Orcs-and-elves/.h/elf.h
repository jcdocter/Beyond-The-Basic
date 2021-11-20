#pragma once
#include "npc.h"

class Elf : public NPC{
    public:
        string GetName() override;
        int GetStrength() override;

        int GetHealth();

        int health;
};