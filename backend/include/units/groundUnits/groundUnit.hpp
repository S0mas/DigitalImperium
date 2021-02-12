#pragma once
#include "../unit.hpp"

class GroundUnit : public Unit {
public:
    GroundUnit() {
        attributes_.combatDices_ = 1;
    }
};
