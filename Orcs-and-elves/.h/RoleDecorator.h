#pragma once

#include <string>
#include <iostream>

#include "Decorator.h"

class RoleDecorator : public Decorator{
    public:
        RoleDecorator(NPC* _npc);
        virtual ~RoleDecorator();

        void Render();
};
