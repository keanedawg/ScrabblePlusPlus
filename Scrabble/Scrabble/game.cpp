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
		for (int i = 1; i <= players; i++) {
			cout << "TURN " << turns << ": Player " << i << ", it is your move\n";
			cout << playTurn() << '\n';
		}
		turns++;
	}
	cout << "Thank you for playing!\n";
}

int Game::playTurn() {
	bool endturn = false;
	while (!endturn) {
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
			endturn = true;
			break;
		case 's':
			cout << "Skipping turn";
			endturn = true;
			break;
		default:
			cout << "Invalid Command Entered, please enter 'h' to get a list of available commands.\n";
			break;
		}
	}
	return 0;
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