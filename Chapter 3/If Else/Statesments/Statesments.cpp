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
}

