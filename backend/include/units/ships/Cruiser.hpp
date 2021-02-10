#pragma once
#include "Ship.hpp"
#include <memory>

class Cruiser : public Ship {
public:
    Cruiser() {
        capacity_ = 0;
        cost_ = 2;
        combat_ = 6;
        move_ = 2;
    }
};
