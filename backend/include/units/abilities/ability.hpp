#pragma once
#include <string>

enum AbilityKey {
    BOMBARDMENT,
    ANTIFIGHTER_BARRAGE,
    SPACE_CANNON,
    SUSTAIN_DAMAGE,
    PRODUCTION
};

class Ability {
protected:
    inline static AbilityKey key_;
public:
    static AbilityKey key() noexcept {
        return key_;
    }
    Ability() {}
};
