#pragma once
#include <string>

class RelicCard {
    std::string name_;
    std::string text_;
public:
    RelicCard(std::string const& name, std::string const& text) noexcept
        : name_(name),
        text_(text){}
};
