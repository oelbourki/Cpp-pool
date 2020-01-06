#pragma once
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		~PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &a);
        PlasmaRifle &operator=(const PlasmaRifle &a);
        void attack() const;
};
