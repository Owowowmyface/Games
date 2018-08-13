#pragma once
#include <string>

class FBullCowGame {
public:
	FBullCowGame(); //Constructor. To make one, make a method that is of the same name as the class.

	// Get and Set variables through public methods
	void Reset();
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(std::string);

private:
	// Variables are never exposed publicly, just gotten and set by public methods. 
	// These are compile-time values. They can be overridden in the class constructor at runtime. 
	int MyCurrentTry;
	int MyMaxTries;
	bool IsIsogram();
};