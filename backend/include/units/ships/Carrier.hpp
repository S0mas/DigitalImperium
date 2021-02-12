#pragma once
#include "Ship.hpp"
#include <memory>

class Carrier : public Ship {
public:
    Carrier() {
        attributes_.cost_ = 3;
        attributes_.combat_ = 9;
        attributes_.move_ = 1;
        attributes_.capacity_ = 4;



    }
    std::unique_ptr<Unit> copy() const noexcept override {
        return std::make_unique<Carrier>();
    }
};
