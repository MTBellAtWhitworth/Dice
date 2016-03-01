/*************************
* Author: Matt Bell, reusing a wee bit of code from Dr. Pete Tucker
* Purpose: Test out a die roller. See Dice.h and Dice.cpp
**************************/

#include<ctime>
#include<cstdlib>
#include<iostream>
#include "Dice.h"

using namespace std;

void init(); // Initialize the randomizer; has to be done for the die roller to work

//Written to test out the dice roller!
int main()
{
	init(); // Initialize the random number generator. Yeah, yeah, yeah, I know it's really pseudorandom!
	DiceSet CupOfDice;                 // Declare a set of Yahtzee! dice
	CupOfDice.rollDice();			   // Roll all the dice!
	bool rollAgain = true;
	while (rollAgain) {
		int yn = 0;
		CupOfDice.rollDice();
		cout << "Your last roll was: " << endl;
		CupOfDice.getLastRoll();
		cout << "Roll again (1 == yes, 2 == no)? ";
		cin >> yn;
		if (yn == 2) rollAgain = false;
	}

	return 0;
}

void init()
{
	srand(time(NULL));
}