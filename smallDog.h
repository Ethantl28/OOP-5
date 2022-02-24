#pragma once
#include "dog.h"

class smallDog : public Dog
{
public:
	using Dog::Dog;

	void speak();
};