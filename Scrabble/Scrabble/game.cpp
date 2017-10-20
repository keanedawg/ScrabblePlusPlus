#include "game.h"

using namespace std;


// Sets up all initial objects then
void Game::startGame() {
	cout << "Scrable has started\n";
//	setupDictionary();
	board.printBoard();
	return;
}

// Main Game Loop
void Game::play() {
	while (!this->gameFinished) {
		promptMove();
	}
}

// Main Game Loop
void Game::printHelp() {
	cout << "Here are all the possible commands:\n"
		 << "h - Help\n"
		 << "c - check if word is valid\n"
		 << "m - enter a move\n";
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