#pragma once

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

class Inventory {
    private:
        int amount = 100;
        std::mutex mutex;

    public:
        Inventory();
        ~Inventory();
        void get();
        static void put(Inventory* self, int _amount);
       //void put( int _amount);
};

