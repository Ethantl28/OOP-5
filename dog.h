#pragma once

#include <iostream>		//for speak()
#include "quadruped.h"

class Dog : public Quadruped	//Dog IS-A quadruped
{
public:
	//constructors
	using Quadruped::Quadruped;		//inherit constructor from quadruped

	void CheckOnPet();
};
