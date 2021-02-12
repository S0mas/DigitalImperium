#pragma once
#include "../../ability.hpp"

class AntiFighterBarrage : public Ability {
    int diceNo_;
    int minimumValueForHit_;
public:
    AntiFighterBarrage(int const diceNo, int const minimumValueForHit) noexcept
        : diceNo_(diceNo),
          minimumValueForHit_(minimumValueForHit) {
        key_ = AbilityKey::ANTIFIGHTER_BARRAGE;
    }
    int doTest(int const modifier) const noexcept {
        return 0;
    }
    std::unique_ptr<Ability> copy() const noexcept override {
        return std::make_unique<AntiFighterBarrage>(diceNo_, minimumValueForHit_);
    }
};
