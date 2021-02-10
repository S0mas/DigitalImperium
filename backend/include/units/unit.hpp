#pragma once
#include "abilities/ability.hpp"
#include <string>
#include <map>
#include <memory>

class Unit {
protected:
    int capacity_ = 0;
    int cost_ = 0;
    int combat_ = 0;
    int move_ = 0;
    std::map<AbilityKey, std::unique_ptr<Ability>> abilities_;
public:
    Unit() {}
};
