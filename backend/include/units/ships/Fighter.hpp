#pragma once
#include "Ship.hpp"
#include "../abilities/bombardment.hpp"
#include "../abilities/sustainDamage.hpp"
#include <memory>

class Fighter : public Ship {
public:
    Fighter() {
        attributes_.cost_ = 1;
        attributes_.combat_ = 9;
        attributes_.move_ = 0;
        attributes_.capacity_ = 0;
    }
    std::unique_ptr<Unit> copy() const noexcept override {
        return std::make_unique<Fighter>();
    }
};
