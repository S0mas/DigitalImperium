#pragma once
#include "ability.hpp"

class AntiFighterBarrage : public Ability {
    int diceNo_;
    int minimumValueForHit_;
public:
    AntiFighterBarrage(int const diceNo, int const minimumBalueForHit) noexcept {
        key_ = AbilityKey::ANTIFIGHTER_BARRAGE;
    }

    int doTest(int const modifier) const noexcept {
        return 0;
    }
};
