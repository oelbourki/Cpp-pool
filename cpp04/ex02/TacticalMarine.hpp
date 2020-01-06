#pragma once
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
    TacticalMarine();
    virtual ~TacticalMarine();
    ISpaceMarine *clone() const;
    void    battleCry() const;
    void    rangedAttack() const;
    void    meleeAttack() const;
};
