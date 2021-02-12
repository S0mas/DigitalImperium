#pragma once
#include "Ship.hpp"
#include "../abilities/antiFighterBarrage.hpp"
#include <memory>

class Destroyer : public Ship {
public:
    Destroyer() {
        attributes_.cost_ = 1;
        attributes_.combat_ = 9;
        attributes_.move_ = 2;
        attributes_.capacity_ = 0;
        abilities_[AntiFighterBarrage::key()] = std::make_unique<AntiFighterBarrage>(2, 9);
    }
};
