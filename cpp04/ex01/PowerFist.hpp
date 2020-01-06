#pragma once
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist();
		~PowerFist();
        PowerFist(PowerFist const &a);
        PowerFist &operator=(PowerFist const &a);
        void attack() const;
};
