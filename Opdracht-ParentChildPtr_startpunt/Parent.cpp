#include <iostream>
#include "Parent.h"

Parent::Parent(std::string name) {
    std::cout << "CTOR" << std::endl;
    this->name = name;
    std::string childName = "ChildOf" + name;
    this->child = new Child(childName);
}

Parent::Parent(const Parent& other) {
    std::cout << "Parent cctor" << std::endl;
    this->name = other.name;
    this->child = new Child(*other.child);
}

Parent::~Parent() {
    std::cout << "Parent dtor" << std::endl;
    delete this->child;
}

Parent& Parent::operator=(const Parent& other) {
    std::cout << "Parent assignment" << std::endl;

    if (this == &other) return *this;

    this->name = other.name;
    delete this->child;
    this->child = new Child(*other.child);

    return *this;
}

Parent::Parent(Parent&& other) noexcept {
    std::cout << "Parent MCTOR" << std::endl;
    name = std::move(other.name);
    child = other.child;

    other.name = "(Data has been moved)";
    other.child = nullptr;
}

Parent& Parent::operator=(Parent&& other) noexcept {
    std::cout << "Parent MAOTOR" << std::endl;

    if (this != &other){
        // jumps out when it deletes the child
        name = other.name;
        child = other.child;

        other.name = ("Data has been moved");
        other.child = nullptr;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Parent& parent) {
    os << "parent name: " << parent.name << "," << *parent.child;
    return os;
}
