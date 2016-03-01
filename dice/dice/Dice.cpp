/*************************
* Author: Matt Bell
* Purpose: Implement a die roller, see Dice.h
**************************/

#include<ctime>
#include<cstdlib>
#include<iostream>
#include "Dice.h"

//Constructor for a user determined number of sides
Dice::Dice(int nS)
{
	numSides = nS;
	lastRoll = 0; // Indicates die has never been rolled
}

//Default constructor for a typical, 6 sided die
Dice::Dice()
{
	numSides = 6;
	lastRoll = 0;
}

//Roll the die!
void Dice::Roll()
{
	lastRoll = (rand() % numSides) + 1;
}

//Getter, retrieves the number of sides. Why did Matt make this const?
int Dice::getSides() const
{
	return numSides;
}

int Dice::getLastRoll() const
{
	return lastRoll;
}

void DiceSet::rollDice()
{
	for (int i = 0; i < 5; i++)
	{
		diceSet[i].Roll();
	}
}

void DiceSet::getLastRoll()
{
	//Prints out all the dice
	for (int i = 0; i < 5; i++)
		//We have to type std:: because we didn't use namespace std;
		std::cout << diceSet[i].getLastRoll() << std::endl;

}