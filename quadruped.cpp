#include "quadruped.h"

//Constructors
Quadruped::Quadruped()
{
	petHeight = 0;
	petWeight = 0;
	petTopSpeed = 0;
	petHighestJump = 0;
	petAge = 0;
	noLegsRaised = 0;
}

Quadruped::Quadruped(float height, float weight, int topSpeed, int highestJump, int age)	//This allows me to set everything at the start instead of using loads of set methods. 
{
	petHeight = height;
	petWeight = weight;
	petTopSpeed = topSpeed;
	petHighestJump = highestJump;
	petAge = age;
}

//workers
void Quadruped::raiseLeg(int legIndex)
{
	if (legIndex > 0 && legIndex < kiNoLegs)
	{
		legs[legIndex].Raise();		//Increases legs[] by legIndex
		noLegsRaised = legIndex;
	}
}

void Quadruped::lowerLeg(int legIndex)
{
	if (legIndex > 0 && legIndex < kiNoLegs)
	{
		legs[legIndex].Lower();		//Decreases legs[] by legIndex
		noLegsRaised = legIndex;
	}
}

//Get
void Quadruped::GetLegRaised()
{
	if (legs[noLegsRaised].getbRaised())	//Finds out of the leg is raised or not
	{
		cout << "Leg is raised" << endl;
	}
	else
	{
		cout << "Leg is not raised" << endl;
	}
}

int Quadruped::GetNoLegsRaised()
{
	return noLegsRaised;
}

int Quadruped::GetTopSpeed()
{
	return petTopSpeed;
}

int Quadruped::GetHighestJump()
{
	return petHighestJump;
}

int Quadruped::GetAge()
{
	return petAge;
}

float Quadruped::getHeight()
{
	return petHeight;
}

float Quadruped::getWeight()
{
	return petWeight;
}
