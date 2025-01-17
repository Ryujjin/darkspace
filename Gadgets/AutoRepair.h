/*
	AutoRepair.h
	(c)2004 Palestar Inc, Richard Lyle
*/

#ifndef AUTOREPAIR_H
#define AUTOREPAIR_H

#include "DarkSpace/GadgetAutoRepair.h"

//----------------------------------------------------------------------------

class AutoRepair : public GadgetAutoRepair
{
public:
	DECLARE_WIDGET_CLASS();

	// NounGadget interface
	int	addValue() const
	{
		return 10000;
	}
	Type type() const
	{
		return SPECIAL;
	}
	int buildTechnology() const
	{
		return 75;
	}
	int	buildCost() const
	{
		return 170;
	}
	dword buildFlags() const
	{
		return NounPlanet::FLAG_METALS;
	}
	int	buildTime() const
	{
		return 150;
	}

	// GadgetAutoRepair interface
	int maxSupply() const
	{
		return 1500;
	}
	int reloadRate() const
	{
		return 50;
	}
	float hullRepairTime() const
	{
		NounShip * pShip = WidgetCast<NounShip>( parent() );
		if( pShip != NULL && !pShip->isOutOfCombat() )
			return 1200.0f;
		
		return 600.0f;
	}
	float gadgetRepairTime() const
	{
		NounShip * pShip = WidgetCast<NounShip>( parent() );
		if( pShip != NULL && !pShip->isOutOfCombat() )
			return 1200.0f;

		return 600.0f;
	}	
	int energyCost() const
	{
		return 0;
	}
};

//----------------------------------------------------------------------------



#endif

//----------------------------------------------------------------------------
// EOF

