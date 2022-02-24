#pragma once

#include <iostream>
#include "leg.h" 

using namespace std;

class Quadruped
{
protected:
	static const int kiNoLegs = 4;
	Leg legs[kiNoLegs];
private:
	int noLegsRaised = 0;
	float petHeight;	//inches
	float petWeight;	//pounds
	int petTopSpeed;	//mph
	int petHighestJump;	//feet
	int petAge;			//years
public:
	//constructors
	Quadruped();
	Quadruped(float height, float weight, int topSpeed, int highestJump, int age);
	//workers
	void raiseLeg(int legIndex);
	void lowerLeg(int legIndex);
	//get
	void GetLegRaised();
	int GetNoLegsRaised();
	int GetTopSpeed();
	int GetHighestJump();
	int GetAge();
	float getHeight();
	float getWeight();
	//pure virtual void
	virtual void speak() = 0;
	virtual void CheckOnPet() = 0;
};
