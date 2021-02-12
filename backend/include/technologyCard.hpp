#pragma once
#include <string>
#include "technologyType.hpp"
#include "technologyRequirements.hpp"

class TechnologyCard {
    std::string name_;
    std::string text_;
    TechnologyType type_;
    TechnologyRequirements requirements_;
public:
    TechnologyCard(std::string const& name, std::string const& text, TechnologyType const type, TechnologyRequirements const requirements) noexcept
        : name_(name),
        text_(text),
        type_(type),
        requirements_(requirements) {}
};
