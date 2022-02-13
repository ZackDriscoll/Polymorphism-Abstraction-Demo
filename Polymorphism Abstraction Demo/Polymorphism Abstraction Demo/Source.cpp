#include <iostream>
#include "Character.h"
#include "Ninja.h"


int main()
{
	//Create Character object and call Attack function
	Character NPC;
	NPC.Attack();

	//Create Ninja object and call polymorphed Attack function
	Ninja RedNinja;
	RedNinja.Attack();



	return 0;
}