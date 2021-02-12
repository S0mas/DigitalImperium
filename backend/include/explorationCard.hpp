#pragma once
#include "explorationType.hpp"
#include <string>

class ExplorationCard {
    std::string name_;
    std::string text_;
    ExplorationType type_;
public:
    ExplorationCard(std::string const& name, std::string const& text, ExplorationType const type) noexcept
        : name_(name),
        text_(text),
        type_(type) {}
};
