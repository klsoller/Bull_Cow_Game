#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// Entry point for our application
int main()
{
	PrintIntro();

	// get a guess from the player
	int limit = 5;
	for (int count = 1; count <= limit; count++)
	{
		GetGuessAndPrintBack();
	}


	return 0;
}


void PrintIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? \n";
	cout << endl;
	return;
}


string GetGuessAndPrintBack() {
	// get a guess from the player
	cout << "Enter your guess:	";
	string Guess = "";
	getline(cin, Guess);

	// repeat the guess back to the player
	cout << "Your guess was . . . " << Guess << "\n";

	return Guess;
}
