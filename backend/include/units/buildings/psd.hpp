#pragma once
#include "building.hpp"
#include "../abilities/spaceCannon.hpp"
#include "../abilities/planetaryShield.hpp"

class PSD : public Building {
public:
    PSD() {
        abilities_[SpaceCannon::key()] = std::make_unique<SpaceCannon>(1, 6);
        abilities_[PlanetaryShield::key()] = std::make_unique<PlanetaryShield>();
    }
};
