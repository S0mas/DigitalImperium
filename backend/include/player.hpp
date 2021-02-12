#pragma once
#include "actionCard.hpp"
#include "races/race.hpp"
#include <memory>
#include <vector>

class Player {
    std::unique_ptr<Race> race_;
    std::vector<ActionCard> actionCards_;
    int tokensInFleetPool_ = 3;
    int tokensInTacticPool_ = 3;
    int tokensInStrategyPool_ = 2;
    int tokensInReinforcementPool_ = 8;
    int victoryPoints_ = 0;
    int commodities_;
    int tradeGoods_;
};
