#pragma once

#include "inventory.h"

#include <iostream>
#include <string>

using namespace std;

class NPC : public Inventory{
    public:
    Inventory inventory;
    virtual string GetName();
    virtual int GetStrength();
    void addToInventory(string itemToAdd);
    string requestItem(int index);


    string name;
    int strength;
};