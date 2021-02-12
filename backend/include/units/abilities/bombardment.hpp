#pragma once
#include "../../ability.hpp"

class Bombardment : public Ability {
    int diceNo_;
    int minimumValueForHit_;
public:
    Bombardment(int const diceNo, int const minimumValueForHit) noexcept
        : diceNo_(diceNo),
          minimumValueForHit_(minimumValueForHit) {
        key_ = AbilityKey::BOMBARDMENT;
    }
    int doTest(int const modifier) const noexcept {
        return 0;
    }
    std::unique_ptr<Ability> copy() const noexcept override {
        return std::make_unique<Bombardment>(diceNo_, minimumValueForHit_);
    }
};
