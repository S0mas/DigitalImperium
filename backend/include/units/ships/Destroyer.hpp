#pragma once
#include "Ship.hpp"
#include "../abilities/antiFighterBarrage.hpp"
#include <memory>

class Destroyer : public Ship {
public:
    Destroyer() {
        capacity_ = 0;
        cost_ = 1;
        combat_ = 9;
        move_ = 2;
        abilities_[AntiFighterBarrage::key()] = std::make_unique<AntiFighterBarrage>(3, 9);
    }
};
