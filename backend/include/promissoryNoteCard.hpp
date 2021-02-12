#pragma once
#include <string>

class PromissoryNoteCard {
    std::string name_;
    std::string text_;
public:
    PromissoryNoteCard(std::string const& name, std::string const& text) noexcept
        : name_(name),
        text_(text){}
};
