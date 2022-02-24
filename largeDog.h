#pragma once
#include "dog.h"

class largeDog : public Dog
{
public:
	using Dog::Dog;

	void speak();
};
