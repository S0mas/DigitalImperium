#pragma once
#include "Ship.hpp"
#include "../abilities/bombardment.hpp"
#include "../abilities/sustainDamage.hpp"
#include <memory>

class WarSun : public Ship {
public:
    WarSun() {
        attributes_.cost_ = 3;
        attributes_.combat_ = 3;
        attributes_.combatDices_ = 3;
        attributes_.move_ = 2;
        attributes_.capacity_ = 6;
        abilities_[Bombardment::key()] = std::make_unique<Bombardment>(3, 5);
        abilities_[SustainDamage::key()] = std::make_unique<SustainDamage>();
    }
    std::unique_ptr<Unit> copy() const noexcept override {
        return std::make_unique<WarSun>();
    }
};
