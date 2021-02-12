#pragma once
#include "Ship.hpp"
#include "../abilities/bombardment.hpp"
#include "../abilities/sustainDamage.hpp"
#include <memory>

class Dreadnought : public Ship {
public:
    Dreadnought() {
        attributes_.cost_ = 4;
        attributes_.combat_ = 5;
        attributes_.move_ = 1;
        attributes_.capacity_ = 1;
        abilities_[Bombardment::key()] = std::make_unique<Bombardment>(1, 5);
        abilities_[SustainDamage::key()] = std::make_unique<SustainDamage>();
    }
    std::unique_ptr<Unit> copy() const noexcept override {
        return std::make_unique<Dreadnought>();
    }
};
