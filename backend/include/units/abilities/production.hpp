#pragma once
#include "ability.hpp"

class Production : public Ability {

public:
    Production() noexcept {
        key_ = AbilityKey::PRODUCTION;
    }
};
