#pragma once

class Leg
{
private:
	bool bRaised;	//Private, so can only be used in this class.
public:
	//constructors
	Leg();

	//workers
	void Raise();
	void Lower();
	bool getbRaised();
};
