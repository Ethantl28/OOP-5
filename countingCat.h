#pragma once
#include <iostream>		//used for count()
#include "cat.h"

class countingCat : public Cat
{
public:
	//constructors
	using Cat::Cat;
	
	void speak();
	void count();
	void count(int end);
	void count(int start, int end);
};