/*
	VerbJump.h
	(c)2000 Palestar Inc, Richard Lyle
*/

#ifndef VERBJUMP_H
#define VERBJUMP_H

#include "NounShip.h"
#include "World/Verb.h"
#include "GameDll.h"

//-------------------------------------------------------------------------------

class DLL VerbJump : public Verb
{
public:
	DECLARE_WIDGET_CLASS();
	DECLARE_PROPERTY_LIST();

	// Construction
	VerbJump();
	VerbJump( NounShip * pShip, dword jumpTime, const Vector3 & jump );

	// Verb Interface
	Priority				priority() const;	// priority of this verb
	Scope					scope() const;
	bool					client() const;		// is this a client verb, meaning okay to receive from a client
	bool					queue() const;

	bool					canAttach( Noun * pNoun );
	void					onExecute();
	
	// Data
	dword					m_nJumpTime;
	Vector3					m_vJumpVelocity;
};

//----------------------------------------------------------------------------



#endif

//----------------------------------------------------------------------------
//EOF
