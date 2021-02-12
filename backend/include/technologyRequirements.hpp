#pragma once
#include "technologyType.hpp"
#include <map>

class TechnologyRequirements {
    std::map<TechnologyType, int> requirements_;
public:
    TechnologyRequirements(int const biotic, int const cybernetic, int const propulsion, int const warfare) noexcept {
        requirements_[TechnologyType::BIOTIC] = biotic;
        requirements_[TechnologyType::CYBERNETIC] = cybernetic;
        requirements_[TechnologyType::PROPULSION] = propulsion;
        requirements_[TechnologyType::WARFARE] = warfare;
    }
};
