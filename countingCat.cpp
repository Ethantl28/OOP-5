#include "countingCat.h"

using namespace std;

void countingCat::speak()
{
	cout << "intelligent meow" << endl;
}

void countingCat::count()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}

void countingCat::count(int end)	//method overload
{
	for (int i = 1; i <= end; i++)	
	{
		cout << i << " ";	//using a space instead of endl for a better looking output
	}
	cout << endl;
}

void countingCat::count(int start, int end)		//method overload
{
	for (int i = start; i <= end; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}
