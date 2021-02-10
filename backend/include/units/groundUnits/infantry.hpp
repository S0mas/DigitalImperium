#pragma once
#include "groundUnit.hpp"

class Infantry : public GroundUnit {
public:
    Infantry() {
        capacity_ = 0;
        cost_ = 1;
        combat_ = 9;
        move_ = 0;
    }
};
