#pragma once
#include "Ship.hpp"
#include <memory>

class Carrier : public Ship {
public:
    Carrier() {
        capacity_ = 6;
        cost_ = 3;
        combat_ = 9;
        move_ = 2;
    }
};
