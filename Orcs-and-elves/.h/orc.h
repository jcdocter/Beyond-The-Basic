#pragma once
#include "npc.h"

class Orc : public NPC{
    public:
        string GetName() override;
        int GetStrength() override;

        int GetDefence();

        int defence;
};
