#pragma once

#include <iostream>
#include <string>

#include "Npc.h"

class  Decorator : public NPC{
    private:
       NPC* npc;

    public:
        Decorator(NPC* _npc);
        virtual ~Decorator();

        virtual void Render();
};
