#pragma once
#include "Ship.hpp"
#include <memory>

class Flagship : public Ship {
public:
    Flagship() {
        capacity_ = 2;
        cost_ = 8;
        combat_ = 3;
        move_ = 2;
    }
};
