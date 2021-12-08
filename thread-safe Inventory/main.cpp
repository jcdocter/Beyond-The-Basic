#include <iostream>
#include <thread>
#include "Inventory.h"

using namespace std;

int main(){
    Inventory* inventory = new Inventory();

    for (int i = 0; i < 5; ++i) {
        inventory->get();
    }

    delete inventory;

    return 0;
}

