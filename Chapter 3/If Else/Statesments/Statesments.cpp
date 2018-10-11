#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x = 4, y = 5;

    cout << "Is x equal to y? C++ says: " << (x == y)
		<< endl; 

	bool isHungry = true;

	if (isHungry)
	{
		cout << "Preparing snack..." << endl;
		cout << "Eating..." << endl;
	}
	else
	{
		cout << "I am not hungry" << endl;
	}

	cout << "Sitting on the couch.." << endl;

	cout << "Is x greater than y? " << (x > y) << endl;
	cout << "Is x greater than OR EQUAL to y? " << (x >= y) << endl;
	cout << "Is x less than y? " << (x < y) << endl;
	cout << "Is x less OR EQUAL to y? " << (x <= y) << endl;
	cout << "Is x not equal to y? " << (x != y) << endl;

	bool wearingSocks = true;
	bool wearingClothes = false;
	if (wearingSocks && wearingClothes)
	{
		cout << "You are dressed!" << endl;
	}
	else
	{
		cout << "You are not dressed yet" << endl;
	}

	bool foundStar = true;
	float levelCompleteTime = 25.f;
	float maxTimeForBonus = 60.f;

	if (foundStar || levelCompleteTime < maxTimeForBonus) 
	{
		cout << "Bonus awarded!" << endl;
	}
	else
	{
		cout << "No bonus" << endl;
	}
}

