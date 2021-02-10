#pragma once
#include "building.hpp"
#include "../abilities/production.hpp"

class SpaceDock : public Building {
public:
    SpaceDock() {
        capacity_ = 6;
        cost_ = 0;
        combat_ = 0;
        move_ = 0;
        abilities_[Production::key()] = std::make_unique<Production>();
    }
};
