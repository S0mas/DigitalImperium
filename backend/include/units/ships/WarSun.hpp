#pragma once
#include "Ship.hpp"
#include "../abilities/bombardment.hpp"
#include "../abilities/sustainDamage.hpp"
#include <memory>

class WarSun : public Ship {
public:
    WarSun() {
        capacity_ = 6;
        cost_ = 12;
        combat_ = 3;
        move_ = 2;
        abilities_[Bombardment::key()] = std::make_unique<Bombardment>(3, 5);
        abilities_[SustainDamage::key()] = std::make_unique<SustainDamage>();
    }
};
