#pragma once
#include <string>
#include <memory>

enum AbilityKey {
    BOMBARDMENT,
    ANTIFIGHTER_BARRAGE,
    SPACE_CANNON,
    SUSTAIN_DAMAGE,
    PLANETARY_SHIELD,
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
    virtual std::unique_ptr<Ability> copy() const noexcept = 0;
};
