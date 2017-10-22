#include "game.h"

using namespace std;


// Sets up all initial objects then
void Game::startGame() {
	cout << "Scrable has started\n";
//	setupDictionary();
	board.printBoard();
	play();
	return;
}

// Main Game Loop
void Game::play() {
	while (!this->gameFinished) {
		char move = promptMove();
		switch (move) {
		case 'h':
			cout << "help";
			break;
		case 'c':
			cout << "check";
			break;
		case 'm':
			cout << "move";
			break;
		case 'q':
			cout << "quit";
			break;
		case 's':
			cout << "skip turn";
			break;
		default:
			cout << "Invalid Command Entered, please enter 'h' to get a list of available commands.";
			break;
		}
	}
}

// Main Game Loop
void Game::printHelp() {
	cout << "Here are all the possible commands:\n"
		 << "h - Help\n"
		 << "c - check if word is valid\n"
		 << "m - enter a move\n"
		 << "q - quit\n"
		 << "s - skip turn\n";
}

char Game::promptMove() {
	char move;
	cout << "What would you like to do: ";
	cin >> move;
	return tolower(move);
}

// Reads the Dictionary Text File and enters values to the hashmap
void Game::setupDictionary() {
	// Use dictionary.txt for real game, tinydict for quick debugging.
//	ifstream fin("dictionary.txt");  
	ifstream fin("tinydict.txt");
	std::string word;

	while (fin >> word) {
		dictionary[word] = true;
		cout << word << "\n";
	}

	fin.close();
}