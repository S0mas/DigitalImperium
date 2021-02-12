#pragma once
#include "../technologyCard.hpp"
#include "../promissoryNoteCard.hpp"
#include "unitsDetails.hpp"
#include <string>
#include <vector>

class Faction {
    std::string name_;
    std::string lore_;
    UnitsDetails unitsDetails_;
    int commoditiesLimit_;
    std::vector<TechnologyCard> specialTechnologies_;
    std::vector<std::unique_prt<Unit>> startingUnits_;
    std::vector<TechnologyCard> startingTechnologies_;
    std::vector<std::unique_ptr<Ability>> abilities_;
    PromissoryNoteCard specialPromissoryNote_;
public:
    Faction(std::string const& name, std::string const& lore, int const commoditiesLimit, UnitsDetails const unitDetails) noexcept
        : name_(name),
        lore_(lore),
        commoditiesLimit_(commoditiesLimit),
        unitDetails_(unitDetails) {}
    UnitsDetails unitDetails() noexcept {
        return unitsDetails_;
    }
    void addStartingUnit(std::unique_prt<Unit>&& unit) noexcept {
        startingUnits_.push_back(std::move(unit));
    }
    void addStartingTechnology(TechnologyCard const technology) noexcept {
        startingTechnologies_.push_back(technology);
    }
    void addSpecialTechnology(TechnologyCard const technology) noexcept {
        specialTechnologies_.push_back(technology);
    }
    void addAbility(std::unique_ptr<Ability>&& ability) noexcept {
        abilities_.push_back(std::move(ability));
    }
};
