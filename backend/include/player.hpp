#pragma once
#include "actionCard.hpp"
#include "factions/faction.hpp"
#include <memory>
#include <vector>

class Player {
    std::unique_ptr<Faction> faction_;
    std::vector<ActionCard> actionCards_;
    std::vector<TechnologyCard> availableTechnologies_;
    std::vector<TechnologyCard> developedTechnologies_;
    int tokensInFleetPool_ = 3;
    int tokensInTacticPool_ = 3;
    int tokensInStrategyPool_ = 2;
    int tokensInReinforcementPool_ = 8;
    int victoryPoints_ = 0;
    int commodities_;
    int tradeGoods_;
};
