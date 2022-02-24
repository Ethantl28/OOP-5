#pragma once

#include <iostream>		//for speak()
#include "quadruped.h"

using namespace std;

class Cat : public Quadruped	//Cat IS-A quadruped
{
public:
	//constructors
	using Quadruped::Quadruped;		//inherit constructor from quadruped

	void CheckOnPet();
};
