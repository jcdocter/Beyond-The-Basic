#include "inventory.h"

Inventory::Inventory() {
    items = {"Weapon 1", "weapon 2", "Dead skull XD"};
}

Inventory::~Inventory() {
    cout << "Clean inventory" << endl;
}
