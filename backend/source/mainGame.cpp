#include "../include/mainGame.hpp"

MainGame::MainGame() noexcept {

}

void MainGame::createRaces() noexcept {
    UnitsDetails unitDetails;
    Attributes flagShipAttributes;
    flagShipAttributes.cost_ = 8;
    flagShipAttributes.combat_ = 7;
    flagShipAttributes.combatDices_ = 2;
    flagShipAttributes.move_ = 1;
    flagShipAttributes.capacity_ = 3;
    unitDetails.flagship_.setAttributes(flagShipAttributes);
    unitDetails.flagship_.addAbility(SpaceCannon::key(), std::make_unique<SpaceCannon>(3, 5, true));
    unitDetails.flagship_.addAbility(SustainDamage::key(), std::make_unique<SustainDamage>());
    Faction theXxchaKingdom("The Xxcha Kingdom", "", 4, unitDetails);
    // 1 carrier
    theXxchaKingdom.addStartingUnit(unitDetails.carrier_.copy());
    // 2 cruisers
    theXxchaKingdom.addStartingUnit(unitDetails.cruiser_.copy());
    theXxchaKingdom.addStartingUnit(unitDetails.cruiser_.copy());
    // 3 fighters
    theXxchaKingdom.addStartingUnit(unitDetails.fighter_.copy());
    theXxchaKingdom.addStartingUnit(unitDetails.fighter_.copy());
    theXxchaKingdom.addStartingUnit(unitDetails.fighter_.copy());
    // 4 infantry
    theXxchaKingdom.addStartingUnit(unitDetails.infantry_.copy());
    theXxchaKingdom.addStartingUnit(unitDetails.infantry_.copy());
    theXxchaKingdom.addStartingUnit(unitDetails.infantry_.copy());
    theXxchaKingdom.addStartingUnit(unitDetails.infantry_.copy());
    // 1 psd
    theXxchaKingdom.addStartingUnit(unitDetails.spaceDock_.copy());
    // 1 space dock
    theXxchaKingdom.addStartingUnit(unitDetails.psd_.copy());

    TechnologyCard technology("startingTech", "", TechnologyType::CYBERNETIC, TechnologyRequirements());
    theXxchaKingdom.addStartingTechnology(technology);

    TechnologyCard specialTechnologyI("specialTechI", "", TechnologyType::CYBERNETIC, TechnologyRequirements());
    TechnologyCard specialTechnologyII("specialTechII", "", TechnologyType::CYBERNETIC, TechnologyRequirements());
    theXxchaKingdom.addStartingTechnology(specialTechnologyI);
    theXxchaKingdom.addStartingTechnology(specialTechnologyII);

    /// add faction abilities
}
