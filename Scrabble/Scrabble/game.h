#pragma once

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
#include "board.h"
#include <fstream>
#include "player.h"

#include <winsock2.h>
#include <ws2tcpip.h>
//#include <stdlib.h>
//#include <stdio.h>

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

using namespace std;


class Game {
private:
	Board board;
	unordered_map<string, bool> dictionary;
	vector<char> letterBag = vector<char>(27);
	int turns = 0;
	int currentPlayer = 1;
	int players;
	Player myPlayers[4];

	unordered_map<char, int> scoreMap;
	char promptMove();
	void setPlayers();
	int playTurn(int player); // returns total number of points player scored
	void printHelp();
	bool isValidWord(const string & word);
	void play();

	// Initial Configurations
	void setup();
	void setupScoreMap();
	void setupDictionary();
	void setupBag();
	
	// Input Checks
	void checkCoordinate(int x) throw(const char*); 
	bool getAndCheckIsDown(char down) throw (const char*);
	void checkWord(const string & word) throw (const char*);


public:
	Game() : gameFinished(false) {}
	void startGame();
	

	bool gameFinished;
};