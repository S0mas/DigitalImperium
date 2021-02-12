#pragma once
#include "../ability.hpp"
#include <string>
#include <map>
#include <memory>

struct Attributes {
    int cost_ = 0;
    int combat_ = 0;
    int combatDices_ = 0;
    int move_ = 0;
    int capacity_ = 0;
};

class Unit {
protected:
    Attributes attributes_;
    std::map<AbilityKey, std::unique_ptr<Ability>> abilities_;
public:
    Unit() {}
    Attributes attributes() const noexcept {
        return attributes_;
    }
    void setAttributes(Attributes const attributes) noexcept {
        attributes_ = attributes;
    }
    void addAbility(AbilityKey const key, std::unique_ptr<Ability>&& ability) noexcept {
        abilities_[key] = std::move(ability);
    }
    virtual std::unique_ptr<Unit> copy() const noexcept = 0;
};
