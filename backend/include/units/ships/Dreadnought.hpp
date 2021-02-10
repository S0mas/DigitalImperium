#pragma once
#include "Ship.hpp"
#include "../abilities/bombardment.hpp"
#include "../abilities/sustainDamage.hpp"
#include <memory>

class Dreadnought : public Ship {
public:
    Dreadnought() {
        capacity_ = 1;
        cost_ = 4;
        combat_ = 5;
        move_ = 1;
        abilities_[Bombardment::key()] = std::make_unique<Bombardment>(1, 5);
        abilities_[SustainDamage::key()] = std::make_unique<SustainDamage>();
    }
};
