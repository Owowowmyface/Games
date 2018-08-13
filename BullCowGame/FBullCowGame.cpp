#include "stdafx.h"
#include "FBullCowGame.h"

//getters
//the getters are set to const so the methods are incapable of changing any of the private variables.

int FBullCowGame::GetMaxTries() const {return MyMaxTries;}
int FBullCowGame::GetCurrentTry() const {return MyCurrentTry;}

//methods

FBullCowGame::FBullCowGame()
{
	Reset();
}

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	MyCurrentTry = 1;
	MyMaxTries = MAX_TRIES;
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
