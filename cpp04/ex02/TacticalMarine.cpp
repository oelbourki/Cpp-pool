#include "TacticalMarine.hpp"






TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const
{
    ISpaceMarine *copy = new TacticalMarine(*this);
    return copy;
}
void    TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}
void    TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;
}
void    TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}