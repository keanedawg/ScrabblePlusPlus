#include "game.h"

using namespace std;


// Sets up all initial objects then
void Game::startGame() {
	cout << "Scrable has started\n";
	setPlayers();
	setupDictionary();
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
			printHelp();
			break;
		case 'c':
			{
				string word;
				cin >> word;
				transform(word.begin(), word.end(), word.begin(), toupper);
				if (isValidWord(word)) {
					cout << word << " is a valid Scrabble word.\n";
				}
				else {
					cout << word << " is NOT a valid Scrabble word.\n";
				}
			}
			break;
		case 'm':
			cout << "move";
			break;
		case 'q':
			this->gameFinished = true;
			cout << "Quitting the game.\n";
			break;
		case 's':
			cout << "skip turn";
			break;
		default:
			cout << "Invalid Command Entered, please enter 'h' to get a list of available commands.\n";
			break;
		}
	}
	cout << "Thank you for playing!\n";
}

bool Game::isValidWord(const string & word) {
	return dictionary.count(word) == 1;
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

void Game::setPlayers() {
	int players = 0;
	cout << "Please enter the number of people playing: ";
	while (players < 2 || players > 4) {
		cin >> players;
		if (players < 2 || players > 4) {
			cout << "Scrabble rules require there to be 2-4 players\n";
			cout << "Please enter the number of people playing: ";
		}
	}
	this->players = players;
}