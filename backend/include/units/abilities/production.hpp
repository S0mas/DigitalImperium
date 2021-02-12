#pragma once
#include "../../ability.hpp"

class Production : public Ability {
    int unitsLimitModifier_;
public:
    Production(int const unitsLimitModifier) noexcept : unitsLimitModifier_(unitsLimitModifier) {
        key_ = AbilityKey::PRODUCTION;
    }
    std::unique_ptr<Ability> copy() const noexcept override {
        return std::make_unique<Production>(unitsLimitModifier_);
    }
};
