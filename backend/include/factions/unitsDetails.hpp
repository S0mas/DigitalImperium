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

struct UnitsDetails {
    PSD psd_;
    SpaceDock spaceDock_;
    Mech mech_;
    Infantry infantry_;
    WarSun warSun_;
    Flagship flagship_;
    Dreadnought dreadnought_;
    Cruiser cruiser_;
    Destroyer destroyer_;
    Carrier carrier_;
    Fighter fighter_;
};
