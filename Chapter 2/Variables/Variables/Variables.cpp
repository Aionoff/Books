#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Vector 
{
	float x, y, z;
};

struct Player
{
	string name;
	int goldPieces;
	float hp;
	Vector vector;
};

int main()
{
	Player player;

	player.name = "William";
	player.goldPieces = 322;
	player.hp = 37.5f;

	Player* ptrMe;
	ptrMe = &player;

	ptrMe->hp -= 15;
	ptrMe->goldPieces *= 2;

	cout << "Character " << player.name << " has "
		<< player.hp << " hp and "
		<< player.goldPieces << " gold pieces"
		<< endl;

	Vector v;
	v.x = 20, v.y = 30, v.z = 40;

	cout << "Vector v contains x = " << v.x
		<< " y = " << v.y
		<< "z = " << v.z
		<< endl;
}