/*
	FighterBay.h
	(c)2000 Palestar Inc, Richard Lyle
*/

#ifndef FIGHTERBAY_H
#define FIGHTERBAY_H

#include "DarkSpace/GadgetFighterBay.h"



//----------------------------------------------------------------------------

class FighterBay : public GadgetFighterBay
{
public:
	DECLARE_WIDGET_CLASS();

	// NounGadget interface
	int maxDamage() const
	{
		return 14500;
	}

	dword hotkey() const
	{
		return 'N';
	}

	NounGadget::Type type() const
	{
		return WEAPON_FIGHTER;
	}

	int durability() const
	{
		return 0;
	}

	int addValue() const
	{
		return 8000;
	}
	int buildTechnology() const
	{
		return 10;
	}
	int	buildCost() const
	{
		return 1000;
	}
	dword buildFlags() const
	{
		return NounPlanet::FLAG_METALS;
	}
	int	buildTime() const
	{
		return 150;
	}

	// GadgetWeapon interface
	int energyCost() const	
	{
		return TICKS_PER_SECOND * 30;
	}

	int energyCharge() const	
	{
		return 1;
	}

	int ammoCost() const
	{
		return 1;
	}

	int ammoMax() const
	{
		return 5;
	}

	int ammoReload() const
	{
		return 1;
	}

	int ammoResources() const
	{
		return 25;
	}

	bool needsTarget() const
	{
		return true;
	}

	bool needsLock() const
	{
		return false;
	}

	int lockTime() const
	{
		return 0;
	}

	dword lockType() const
	{
		return 0;
	}

	bool checkRange() const
	{
		return true;
	}

	bool inheritVelocity() const
	{
		return false;
	}

	bool turret() const
	{
		return true;
	}

	int	maxProjectiles() const
	{
		return 5;
	}
	int projectileCount() const
	{
		return 1;
	}

	int	projectileDelay() const
	{
		return 0;
	}

	bool projectileSmart() const
	{
		return true;
	}

	bool isMine() const
	{
		return true;
	}

	float projectileVelocity() const
	{
		return 35.0f;
	}

	float projectileLife() const
	{
		return 285.0f;			// fighter has an range of 10,000 gu one way
	}

	float projectileSig() const
	{
		return 0.5f;
	}

	bool projectileCollidable() const
	{
		return true;
	}
	bool projectileAutoTarget() const
	{
		return false;
	}
	float turnRate() const
	{
		return PI / 4.0f;
	}

	int tracerRate() const
	{
		return 10;
	}

	int tracerLife() const
	{
		return TICKS_PER_SECOND * 1;
	}

	dword damageType() const
	{
		return DAMAGE_KINETIC | DAMAGE_ENERGY;
	}

	int damage() const
	{
		return 0;
	}

	int damageRandom() const
	{
		return 0;
	}
	
	bool reverseFalloff() const
	{
		return false;
	}

	float damageFalloff() const
	{
		return 1;
	}

	int repairRate() const
	{
		return 1;
	}

	int areaDamage() const
	{
		return 1100;
	}

	int areaDamageRandom() const
	{
		return 500;
	}

	float areaDamageRadius() const
	{
		return 20.0f;
	}
	float armTime() const
	{
		return 0.0f;
	}
};

//----------------------------------------------------------------------------



#endif

//----------------------------------------------------------------------------
//EOF
