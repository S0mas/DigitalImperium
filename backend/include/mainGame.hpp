#pragma once
#include "phases.hpp"
#include "player.hpp"
#include <vector>
#include <memory>

class MainGame {
std::vector<std::unique_ptr<Phase>> phases_;
std::vector<std::unique_ptr<Player>> players_;
Player* speaker_;
std::vector<Player*> orderedPlayersBySpeaker_;
std::vector<Player*> orderedPlayersByInitiative_;

void updatePlayersOrderBySpeaker() {

}

void updatePlayersOrderByInitiative() {

}

void createRaces() noexcept;

void initPhases() {
    /// STRATEGY PHASE ////////////////////////////////////////////////////////////////////////////
    phases_.push_back(std::make_unique<PickingStrategyCardPhase>());
    phases_.push_back(std::make_unique<PlacingTradeGoodsOnNotChosenStrategyCardsPhase>());
    ///////////////////////////////////////////////////////////////////////////////////////////////

    /// ACTION PHASE //////////////////////////////////////////////////////////////////////////////
    phases_.push_back(std::make_unique<ActionPhase>());
    /// ACTION PHASE //////////////////////////////////////////////////////////////////////////////

    /// STATUS PHASE //////////////////////////////////////////////////////////////////////////////
    phases_.push_back(std::make_unique<ScoreObjectivesPhase>());
    phases_.push_back(std::make_unique<RevealPublicObjectivePhase>());
    phases_.push_back(std::make_unique<DrawActionCardsPhase>());
    phases_.push_back(std::make_unique<RemoveCommandsTokensPhase>());
    phases_.push_back(std::make_unique<GainAndRedistributeCommandsTokensPhase>());
    phases_.push_back(std::make_unique<ReadyCardsPhase>());
    /// STATUS PHASE //////////////////////////////////////////////////////////////////////////////

    /// AGENDA PHASE //////////////////////////////////////////////////////////////////////////////
    phases_.push_back(std::make_unique<RepairUnitsPhase>());
    phases_.push_back(std::make_unique<ReturnStrategyCardsPhase>());
    phases_.push_back(std::make_unique<RevealAgendaPhase>());
    phases_.push_back(std::make_unique<VoteAgendaPhase>());
    phases_.push_back(std::make_unique<ResolveAgendaOutcomePhase>());
    phases_.push_back(std::make_unique<RevealAgendaPhase>());
    phases_.push_back(std::make_unique<VoteAgendaPhase>());
    phases_.push_back(std::make_unique<ResolveAgendaOutcomePhase>());
    phases_.push_back(std::make_unique<ReadyPlanetsPhase>());
    /// AGENDA PHASE //////////////////////////////////////////////////////////////////////////////
}
public:
    MainGame() noexcept;
};
