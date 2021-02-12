#pragma once
#include <string>
#include "technologyType.hpp"
#include "technologyRequirements.hpp"

class TechnologyCard {
    std::string name_;
    std::string text_;
    TechnnologyType type_;
    TechnologyRequirements requirements_;
public:
    TechnologyCard(std::string const& name, std::string const& text, TechnnologyType const type, int const biotic, int const cybernetic, int const propulsion, int const warfare) noexcept
        : name_(name),
        text_(text),
        type_(type),
        requirements_(biotic, cybernetic, propulsion, warfare) {}
};
