#pragma once
#include "Ship.hpp"
#include <memory>

class Cruiser : public Ship {
public:
    Cruiser() {
        attributes_.cost_ = 2;
        attributes_.combat_ = 7;
        attributes_.move_ = 2;
        attributes_.capacity_ = 0;
    }
    std::unique_ptr<Unit> copy() const noexcept override {
        return std::make_unique<Cruiser>();
    }
};
