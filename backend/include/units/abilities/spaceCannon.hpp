#pragma once
#include "ability.hpp"

class SpaceCannon : public Ability {
    int diceNo_;
    int minimumValueForHit_;
public:
    SpaceCannon(int const diceNo, int const minimumBalueForHit) noexcept {
        key_ = AbilityKey::SPACE_CANNON;
    }

    int doTest(int const modifier) const noexcept {
        return 0;
    }
};
