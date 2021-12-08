#include "Inventory.h"

Inventory::Inventory() {

}

Inventory::~Inventory() {

}

void Inventory::get() {
    std::cout << "Get amount of Items " << std::endl;

    std::vector<std::thread> threads;
    for (int i = 1; i <= 5; i++) {
        threads.push_back(std::thread(&Inventory::put, this, i));
    }

    for(auto& th : threads){
        th.join();
    }

    std::cout << "Amount of item is: " << amount << std::endl;
}

void Inventory::put(Inventory* self, int _amount) {
   // int addItems = _amount;
    int removeItems = -_amount;

    std::lock_guard<std::mutex> guard(self->mutex);
   // self->amount += addItems;
    self->amount += removeItems;
}