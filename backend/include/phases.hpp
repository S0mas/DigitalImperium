#pragma once

class Phase {

};

class StrategyPhase : public Phase {

};

class PickingStrategyCardPhase : public StrategyPhase {

};

class PlacingTradeGoodsOnNotChosenStrategyCardsPhase : public StrategyPhase {

};

class ActionPhase : public Phase {

};

class MovePhase : public ActionPhase {

};

class SpaceShipsMovementPhase : public MovePhase {

};

class SpaceCannonOffensePhase : public MovePhase {

};

class SpaceCombatPhase : public ActionPhase {

};

class AntiFighterBarragePhase : public SpaceCombatPhase {

};

class SpaceCombatRoundPhase : public SpaceCombatPhase {

};

class RetreatDeclarationPhase : public SpaceCombatRoundPhase {

};

class RollForSpaceCombatHitsPhase : public SpaceCombatRoundPhase {

};

class AssignSpaceCombatHitsPhase : public SpaceCombatRoundPhase {

};

class RetreatPhase : public SpaceCombatRoundPhase {

};

class InvasionPhase : public ActionPhase {

};

class BombardmentPhase : public InvasionPhase {

};

class CommitingGroundForcesPhase : public InvasionPhase {

};

class SpaceCannonDefensePhase : public InvasionPhase {

};

class GroundCombatPhase : public InvasionPhase {

};

class GroundCombatRoundPhase : public GroundCombatPhase {

};

class RollForGroundCombatHitsPhase : public GroundCombatRoundPhase {

};

class AssignGroundCombatHitsPhase : public GroundCombatRoundPhase {

};

class EstablishControlPhase : public InvasionPhase {

};

class ProductionPhase : public ActionPhase {

};

class StatusPhase : public Phase {

};

class ScoreObjectivesPhase : public StatusPhase {

};

class RevealPublicObjectivePhase : public StatusPhase {

};

class DrawActionCardsPhase : public StatusPhase {

};

class RemoveCommandsTokensPhase : public StatusPhase {

};

class GainAndRedistributeCommandsTokensPhase : public StatusPhase {

};

class ReadyCardsPhase : public StatusPhase {

};

class RepairUnitsPhase : public StatusPhase {

};

class ReturnStrategyCardsPhase : public StatusPhase {

};

class AgendaPhase : public Phase {

};

class RevealAgendaPhase : public AgendaPhase {

};

class VoteAgendaPhase : public AgendaPhase {

};

class ResolveAgendaOutcomePhase : public AgendaPhase {

};

class ReadyPlanetsPhase : public AgendaPhase {

};
