#include <iostream>

#include "countingCat.h"
#include "largeCat.h"

#include "smallDog.h"
#include "largeDog.h"

#include "brownBear.h"

using namespace std;

int main()
{
	//Height(inches), weight(pounds), top speed(miles per hour), highest jump(feet), age(years)
	largeDog lassie(26, 55, 35, 3, 9);
	smallDog joey(9, 16, 20, 3, 12);
	countingCat tommy(8, 12, 30, 8, 3);
	largeCat garfield(47, 340, 40, 16, 9);
	BrownBear pumba(59, 1212, 34, 4, 10);
	
	lassie.raiseLeg(1);
	pumba.raiseLeg(2);	

	cout << "Lassie said ";
	lassie.speak();
	cout << "Joey said ";
	joey.speak();
	cout << "Tommy said ";
	tommy.speak();
	cout << "Garfield said "; 
	garfield.speak();
	cout << "Pumba said ";
	pumba.speak();
	cout << endl;

	cout << "Lassie's ";
	lassie.GetLegRaised();
	cout << "Joey's ";
	joey.GetLegRaised();
	cout << "Tommy's ";
	tommy.GetLegRaised();
	cout << "Garfield's ";
	garfield.GetLegRaised();
	cout << "Pumba's ";
	pumba.GetLegRaised();
	cout << endl;

	cout << "Lassie has " << lassie.GetNoLegsRaised() << " leg(s) raised" << endl;
	cout << "Joey has " << joey.GetNoLegsRaised() << " leg(s) raised" << endl;
	cout << "Tommy has " << tommy.GetNoLegsRaised() << " leg(s) raised" << endl;
	cout << "Garfield has " << garfield.GetNoLegsRaised() << " leg(s) raised" << endl;
	cout << "Pumba has " << pumba.GetNoLegsRaised() << " leg(s) raised" << endl;
	cout << endl;

	cout << "Lassie is " << lassie.getHeight() << " inches tall and weighs " << lassie.getWeight() << " lbs" << endl;
	cout << "Joey is " << joey.getHeight() << " inches tall and weighs " << joey.getWeight() << " lbs" << endl;
	cout << "Tommy is " << tommy.getHeight() << " inches tall and weighs " << joey.getWeight() << " lbs" << endl;
	cout << "Garfield is " << garfield.getHeight() << " inches tall and weighs " << garfield.getWeight() << " lbs" << endl;
	cout << "Pumba is " << pumba.getHeight() << " inches tall and weighs " << pumba.getWeight() << " lbs" << endl;
	cout << endl;

	cout << "Lassie can run " << lassie.GetTopSpeed() << " miles per hour and jump " << lassie.GetHighestJump() << " feet" << endl;
	cout << "Joey can run " << joey.GetTopSpeed() << " miles per hour and jump " << joey.GetHighestJump() << " feet " << endl;
	cout << "Tommy can run " << tommy.GetTopSpeed() << " miles per hour and jump " << joey.GetHighestJump() << " feet " << endl;
	cout << "Garfield can run " << garfield.GetTopSpeed() << " miles per hour and jump " << garfield.GetHighestJump() << " feet" << endl;
	cout << "Pumba can run " << pumba.GetTopSpeed() << " miles per hour and jump " << pumba.GetHighestJump() << " feet" << endl;
	cout << endl;

	cout << "Right now, Lassie is ";
	lassie.CheckOnPet();
	cout << "Joey is ";
	joey.CheckOnPet();
	cout << "Tommy is ";
	tommy.CheckOnPet();
	cout << "Garfield is ";
	garfield.CheckOnPet();
	cout << "and Pumba is ";
	pumba.CheckOnPet();
	cout << endl;

	cout << "Tommy counts to 10" << endl << "\nTommy: ";
	tommy.count();
	cout << "\nTommy counts to 20" << endl << "\nTommy: ";		//count(), count(int end), and count(int start, int end) is a method overload.
	tommy.count(20);	
	cout << "\nTommy counts from 800 to 815" << endl << "\nTommy: ";
	tommy.count(800, 815);

	system("pause");
	return 0;
}

