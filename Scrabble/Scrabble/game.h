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
	vector<char> letterBag;
	int turn;
	int players;

	char promptMove();
	void setPlayers();
	void printHelp();
	bool isValidWord(const string &word);
	void play();
	void setupDictionary();
	

public:
	Game() : gameFinished(false) {}
	void startGame();
	

	bool gameFinished;
};