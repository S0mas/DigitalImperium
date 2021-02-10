#pragma once
#include "Ship.hpp"
#include "../abilities/bombardment.hpp"
#include "../abilities/sustainDamage.hpp"
#include <memory>

class Fighter : public Ship {
public:
    Fighter() {
        capacity_ = 0;
        cost_ = 1;
        combat_ = 9;
        move_ = 0;
    }
};
