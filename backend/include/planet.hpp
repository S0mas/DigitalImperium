#pragma once
#include <string>
#include "enchantmentCard.hpp"
#include "technologyType.hpp"
#include "trait.hpp"
#include <vector>

class Planet {
    std::string name_;
    std::string lore_;
    int production_ = 0;
    int influence_ = 0;
    Trait trait_ = Trait::NONE;
    TechnologyType technologyType_ = TechnologyType::NONE;
    std::vector<EnchantmentCard> enchantments
    _;
public:
    Planet(std::string const& name, std::string const& lore, int const production, int const influence, Trait const trait) noexcept
        : name_(name), lore_(lore), production_(production), influence_(influence), trait_(trait) {}
};
