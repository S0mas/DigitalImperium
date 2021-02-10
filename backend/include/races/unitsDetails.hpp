#pragma once
#include "../units/buildings/psd.hpp"
#include "../units/buildings/spaceDock.hpp"
#include "../units/groundUnits/mech.hpp"
#include "../units/groundUnits/infantry.hpp"
#include "../units/ships/Carrier.hpp"
#include "../units/ships/Cruiser.hpp"
#include "../units/ships/Destroyer.hpp"
#include "../units/ships/Dreadnought.hpp"
#include "../units/ships/Fighter.hpp"
#include "../units/ships/Flagship.hpp"
#include "../units/ships/WarSun.hpp"

#include <memory>

class UnitsDetails {
public:
    std::unique_ptr<PSD> psd_;
    std::unique_ptr<SpaceDock> spaceDock_;
    std::unique_ptr<Mech> mech_;
    std::unique_ptr<Infantry> infantry_;
    std::unique_ptr<WarSun> warSun_;
    std::unique_ptr<Flagship> flagship_;
    std::unique_ptr<Dreadnought> dreadnought_;
    std::unique_ptr<Cruiser> cruiser_;
    std::unique_ptr<Destroyer> destroyer_;
    std::unique_ptr<Carrier> carrier_;
    std::unique_ptr<Fighter> fighter_;
};
