#pragma once
#include <iostream>		//for speak()
#include "quadruped.h"

class Bear : public Quadruped	//bear IS-A quadruped
{
public:
	//contructors
	using Quadruped::Quadruped;		//inherit contructor from quadruped

	void CheckOnPet();
};