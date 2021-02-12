#pragma once
#include "phases.hpp"
#include <memory>
#include <string>

class ActionCard {
    std::string name_;
    std::string text_;
    std::unique_ptr<Phase> phaseToPlay_;
public:
    ActionCard(std::string const& name, std::string const& text, std::unique_ptr<Phase>&& phase) noexcept
        : name_(name),
        text_(text),
        phaseToPlay_(std::move(phase)) {}
};
