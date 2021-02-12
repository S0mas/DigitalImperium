#pragma once
#include <string>

class AgendaCard {
    std::string name_;
    std::string text_;
    std::string lore_;
public:
    AgendaCard(std::string const& name, std::string const& text, std::string const& lore) noexcept
        : name_(name),
        text_(text),
        lore_(lore) {}
};
