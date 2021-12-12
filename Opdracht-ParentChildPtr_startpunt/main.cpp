#include <iostream>
#include "Parent.h"

int main() {
    auto p1 = new Parent("Parent1");
    std::cout << "p1:" << *p1 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    // when i do std::move(*p1) in the new parent i will get the move constructor
    // and it will remove the copy constructor
    auto p2 = new Parent(std::move(*p1)); // roept de copy constructor aan
    std::cout << "p2:" << *p2 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    auto p3 = new Parent("Parent3");
    std::cout << "p3:" << *p3 << std::endl;

    std::cout << "-----------------------------" << std::endl;

    // i can't use the move assignment operator here because it returns nothing
    // when i use the delete in the move assignment operator
    *p3 = std::move(*p1); // roept de assignment operator aan
    std::cout << "p1:" << *p3 << std::endl;

    std::cout << "-----------------------------" << std::endl;
    delete p1;
    delete p2;
    delete p3;

    return 0;
}