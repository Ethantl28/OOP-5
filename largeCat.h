#pragma once
#include "cat.h"

class largeCat : public Cat
{
public:
	using Cat::Cat;

	void speak();
};