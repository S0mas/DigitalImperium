#pragma once
#include "groundUnit.hpp"

class Mech : public GroundUnit {
public:
    Mech() {
        capacity_ = 0;
        cost_ = 2;
        combat_ = 6;
        move_ = 0;
    }
};
