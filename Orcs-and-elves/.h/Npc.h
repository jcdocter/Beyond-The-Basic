#pragma once

#include <string>

class NPC{
    protected:
        std::string role1 = "Farmer";
        std::string role2 = "Soldier";
        std::string role3 = "Shaman";

    public:
        NPC();
        virtual ~NPC();

        NPC* MakeMonster();

        virtual void Render() = 0;
};