#include "stdafx.h"
#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate a new game

int main()
{
	bool bPlayAgain = true;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
    return 0;
}

void PrintIntro() {
	// Introduce the Game
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

void PlayGame() {
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries(); 
	// Starts a game loop
	for (int count = 1; count <= MaxTries; count++) {
		std::string Guess = GetGuess();
		std::cout << "\nYour Guess Was: " << Guess << "\n";
	}
}

std::string GetGuess() {
	// Get a guess from the player
	int CurrentGuess = BCGame.GetCurrentTry();
	std::cout << "\n" << "Try " << CurrentGuess << ". Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n): ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
