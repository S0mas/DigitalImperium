#pragma once
#include "../../ability.hpp"

class SpaceCannon : public Ability {
    int diceNo_;
    int minimumValueForHit_;
    bool isUpgraded_;
public:
    SpaceCannon(int const diceNo, int const minimumValueForHit, bool const upgraded = false) noexcept
        : diceNo_(diceNo),
          minimumValueForHit_(minimumValueForHit),
          isUpgraded_(upgraded) {
        key_ = AbilityKey::SPACE_CANNON;
    }
    int doTest(int const modifier) const noexcept {
        return 0;
    }
    void upgrade() noexcept {
        isUpgraded_ = true;
    }
    std::unique_ptr<Ability> copy() const noexcept override {
        return std::make_unique<SpaceCannon>(diceNo_, minimumValueForHit_, isUpgraded_);
    }
};
