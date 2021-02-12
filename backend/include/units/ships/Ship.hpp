#pragma once
#include "../unit.hpp"

class Ship : public Unit {
public:
    Ship() noexcept {
        combatDices_ = 1;
    }
};
