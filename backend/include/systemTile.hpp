#pragma once
#include "directions.hpp"
#include "planet.hpp"
#include "systemTileType.hpp"
#include <map>
#include <vector>

class SystemTile {
    std::map<Direction, SystemTile> neighbours_;
    std::vector<Planet> planets_;
    SystemTileType type_;
public:
    SystemTile(SystemTileType const type) noexcept
        : type_(type)  {}
};
