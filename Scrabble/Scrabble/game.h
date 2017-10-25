#pragma once

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
#include "board.h"
#include <fstream>

using namespace std;


class Game {
private:
	Board board;
	unordered_map<string, bool> dictionary;
	vector<char> letterBag = vector<char>(26);
	int turns = 0;
	int currentPlayer = 1;
	int players;

	char promptMove();
	void setPlayers();
	int playTurn(); // returns total number of points player scored
	void printHelp();
	bool isValidWord(const string &word);
	void play();
	void setupDictionary();
	void setupBag();
	

public:
	Game() : gameFinished(false) {}
	void startGame();
	

	bool gameFinished;
};