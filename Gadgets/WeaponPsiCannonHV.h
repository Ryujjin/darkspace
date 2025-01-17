/*	
	WeaponPsiCannonHV.h
	(c)2009 Palestar, Richard Lyle
	Created by Robert Kelford, March 2009
*/

#ifndef WEAPON_PSI_CANNON_HV_H
#define WEAPON_PSI_CANNON_HV_H

#include "DarkSpace/Constants.h"
#include "DarkSpace/GadgetWeapon.h"



//----------------------------------------------------------------------------

class WeaponPsiCannonHV : public GadgetWeapon
{
public:
	DECLARE_WIDGET_CLASS();

	// NounGadget interface
	Type type() const
	{
		return WEAPON;
	}
	int maxDamage() const
	{
		return (4800 + (level() * 5300));
	}
	int addValue() const
	{
		return 2500;
	}
	int buildTechnology() const
	{
		return 20;
	}
	int	buildCost() const
	{
		return 100;
	}
	dword buildFlags() const
	{
		return NounPlanet::FLAG_METALS;
	}
	int buildTime() const
	{
		return 520;
	}
	// GadgetWeapon interface
	int energyCost() const	
	{
		return (800 + (level() * 160));
	}
	int energyCharge() const
	{
		return 12;
	}
	int ammoCost() const
	{
		return 0;
	}
	int ammoMax() const
	{
		return 0;
	}
	int ammoReload() const
	{
		return 0;
	}
	int ammoResources() const
	{
		return 0;
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
		return true;
	}
	bool turret() const
	{
		return true;
	}
	int	maxProjectiles() const
	{
		return 15;
	}
	int projectileCount() const
	{
		return 6;
	}
	int projectileDelay() const
	{
		return 4;
	}
	bool projectileSmart() const
	{
		return false;
	}
	bool isMine() const
	{
		return false;
	}
	float projectileVelocity() const
	{
		return 500.0f - (level() * 25.0f);
	}
	float projectileLife() const
	{
		return 800.0f / projectileVelocity();
	}
	float projectileSig() const
	{
		return 0.0f;
	}
	bool projectileCollidable() const
	{
		return false;
	}
	bool projectileAutoTarget() const
	{
		return false;
	}
	float turnRate() const
	{
		return 0.0f;
	}
	int tracerRate() const
	{
		return 10;
	}
	int tracerLife() const
	{
		return TICKS_PER_SECOND * 2;
	}
	dword damageType() const
	{
		return DAMAGE_PSI | DAMAGE_KINETIC;
	}
	int damage() const
	{
		return (200 + (level() * 40));
	}
	int damageRandom() const
	{
		return (1200 + (level() * 240));
	}
	bool reverseFalloff() const
	{
		return false;
	}
	float damageFalloff() const
	{
		return 0.667f;
	}
	int repairRate() const
	{
		return 3;
	}
	int areaDamage() const
	{
		return 0;
	}
	int areaDamageRandom() const
	{
		return 0;
	}
	float areaDamageRadius() const
	{
		return 0.0f;
	}
	float armTime() const
	{
		return 0.0f;
	}
};

//----------------------------------------------------------------------------



#endif

//----------------------------------------------------------------------------
// EOF
