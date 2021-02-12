#pragma once
#include "groundUnit.hpp"

class Mech : public GroundUnit {
public:
    Mech() {
        attributes_.cost_ = 2;
        attributes_.combat_ = 6;
        attributes_.move_ = 0;
        attributes_.capacity_ = 0;
    }
    std::unique_ptr<Unit> copy() const noexcept override {
        return std::make_unique<Mech>();
    }
};
