#include "game.h"

using namespace std;

void Game::startGame() {
	cout << "Scrable has started";
	setupDictionary();
	return;
}

void Game::setupDictionary() {
	ifstream fin("dictionary.txt");

	std::string word;

	while (fin >> word) {
		dictionary[word] = true;
		cout << word << "\n";
	}

	fin.close();
	return;
}