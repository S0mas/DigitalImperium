#pragma once
#include "ability.hpp"

class Bombardment : public Ability {
    int diceNo_;
    int minimumValueForHit_;
public:
    Bombardment(int const diceNo, int const minimumBalueForHit) noexcept {
        key_ = AbilityKey::BOMBARDMENT;
    }

    int doTest(int const modifier) const noexcept {
        return 0;
    }
};
