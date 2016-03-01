/*************************
* Author: Matt Bell
* Purpose: Implement a die roller, see Dice.h
**************************/

#ifndef _DICE_H_
#define _DICE_H_

class Dice {
private:
	int numSides; //How many sides is this die?
	int lastRoll; //We'll keep track of how many times this die has been rolled.
public:
	Dice(int); // creates a dice with nS number of sides and 0 rolls
	Dice(); // Default constructor. Creates a 6 sided die with 0 rolls.
	void Roll(); // rolls the dice
	int getSides() const; //returns the number of sides
	int getLastRoll() const; //How many times has this dice been rolled?
};

//Defines a set of five die, like in Yahtzee! Used to illustrate the HAS-A relationship between classes
class DiceSet {
private:
	Dice diceSet[5];
public:
	void getLastRoll(); //Prints out the roll to the screen
	void rollDice(); //Rolls all the die
};
#endif