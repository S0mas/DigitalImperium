#pragma once
#include "technologyType.hpp"
#include <map>

class TechnologyRequirements {
    std::map<TechnologyType, int> requirements_;
public:
    TechnologyRequirements(int const biotic = 0, int const cybernetic = 0, int const propulsion = 0, int const warfare = 0) noexcept {
        requirements_[TechnologyType::BIOTIC] = biotic;
        requirements_[TechnologyType::CYBERNETIC] = cybernetic;
        requirements_[TechnologyType::PROPULSION] = propulsion;
        requirements_[TechnologyType::WARFARE] = warfare;
    }
};
