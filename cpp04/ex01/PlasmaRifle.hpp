#pragma once
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		~PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &a);
        PlasmaRifle &operator=(PlasmaRifle const &a);
        void attack() const;
};
