#pragma once
#include "actionCard.hpp"
#include "races/race.hpp"
#include <memory>
#include <vector>

class Player {
    std::unique_ptr<Race> race_;
    std::vector<ActionCard> actionCards_;
    int tokensInFleetPoolNo_ = 3;
    int tokensInTacticPoolNo_ = 3;
    int tokensInStrategyPoolNo_ = 2;
    int tokensInReinforcementPoolNo_ = 8;
};
