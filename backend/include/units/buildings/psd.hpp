#pragma once
#include "building.hpp"
#include "../abilities/spaceCannon.hpp"

class PSD : public Building {
public:
    PSD() {
        capacity_ = 0;
        cost_ = 0;
        combat_ = 0;
        move_ = 0;
        abilities_[SpaceCannon::key()] = std::make_unique<SpaceCannon>(1, 6);
    }
};
