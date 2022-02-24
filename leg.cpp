#include "leg.h"

Leg::Leg()
{
	bRaised = false;
}

void Leg::Raise()
{
	bRaised = true;
}

void Leg::Lower()
{
	bRaised = false;
}

bool Leg::getbRaised()
{
	return bRaised;
}
