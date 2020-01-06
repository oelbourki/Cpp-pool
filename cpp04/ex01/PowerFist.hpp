#pragma once
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist();
		~PowerFist();
        PowerFist(const PowerFist &a);
        PowerFist &operator=(const PowerFist &a);
        void attack() const;
};
