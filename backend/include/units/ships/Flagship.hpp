#pragma once
#include "Ship.hpp"
#include <memory>

class Flagship : public Ship {
public:
    Flagship(Attributes const attributes) {
        setAttributes(attributes);
    }
    std::unique_ptr<Unit> copy() const noexcept override {
        auto newShip = std::make_unique<Flagship>(attributes());
        for(auto const& ability : abilities_)
            newShip->addAbility(ability.first, ability.second->copy());
        return newShip;
    }
};
