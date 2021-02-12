#pragma once
#include <string>

class StrategyCard {
    std::string name_;
    std::string primaryText_;
    std::string secondaryText_;
    int initiative_;
public:
    StrategyCard(std::string const& name, std::string const& primaryText, std::string const& secondaryText, int const initiative) noexcept
        : name_(name),
        primaryText_(primaryText),
        secondaryText_(secondaryText),
        initiative_(initiative) {}
};
