#pragma once
#include "building.hpp"
#include "../abilities/production.hpp"

class SpaceDock : public Building {
public:
    SpaceDock(int const unitsLimitModifier = 2, int const capacity = 3) {
        capacity_ = capacity;
        cost_ = 0;
        combat_ = 0;
        move_ = 0;
        abilities_[Production::key()] = std::make_unique<Production>(unitsLimitModifier);
    }
};
