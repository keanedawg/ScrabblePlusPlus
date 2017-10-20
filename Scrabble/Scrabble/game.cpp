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
void play() {

}

// Reads the Dictionary Text File and enters values to the hashmap
void Game::setupDictionary() {
	ifstream fin("dictionary.txt");
	std::string word;

	while (fin >> word) {
		dictionary[word] = true;
		cout << word << "\n";
	}

	fin.close();
}