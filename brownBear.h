#pragma once

#include <iostream>
#include "bear.h"

class BrownBear : public Bear
{
public:
	using Bear::Bear;

	void speak();
};