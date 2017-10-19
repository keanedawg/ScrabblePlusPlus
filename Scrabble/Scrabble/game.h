#pragma once

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include "board.h"
#include <fstream>

using namespace std;


class Game {
private:
	Board board;
	unordered_map<string, bool> dictionary;
	vector<char> letterBag;

	void setupDictionary();


public:
	void startGame();


};