#pragma once
#include "../technologyCard.hpp"
#include "unitsDetails.hpp"
#include <string>
#include <vector>

class Race {
    std::string name_;
    std::string lore_;
    std::vector<TechnologyCard> startingTechnologies_;
    std::vector<TechnologyCard> specialTechnologies_;
    std::vector<Unit> startingUnits_;
    UnitsDetails spaceShipsDetails_;
    int commoditiesLimit_;
public:
    Race() noexcept {}
};
