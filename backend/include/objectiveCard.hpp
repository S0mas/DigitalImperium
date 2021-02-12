#pragma once
#include <string>

class ObjectiveCard {
    std::string name_;
    std::string text_;
    int victoryPoints_;
public:
    ObjectiveCard(std::string const& name, std::string const& text, int const victoryPoints) noexcept
        : name_(name),
        text_(text),
        victoryPoints_(victoryPoints) {}
};
