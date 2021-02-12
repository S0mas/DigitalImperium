#pragma once
#include "../../ability.hpp"

class PlanetaryShield : public Ability {
public:
    PlanetaryShield() noexcept {
        key_ = AbilityKey::PLANETARY_SHIELD;
    }
};
