#pragma once
#include "ability.hpp"

class SustainDamage : public Ability {
    bool canSustainDamage_ = true;
public:
    SustainDamage() {
        key_ = AbilityKey::SUSTAIN_DAMAGE;
    }
    void sustainDamage() noexcept {
        canSustainDamage_ = false;
    }
    bool canSustainDamage() const noexcept {
        return canSustainDamage_;
    }
};
