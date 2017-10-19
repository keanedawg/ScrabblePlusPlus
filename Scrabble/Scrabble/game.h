#pragma once

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include "board.h"


class Game {
private:
	Board board;
	unordered_map<string, bool> isValid;
	vector<char> letterBag;

	void setupDictionary();


public:
	void startGame();


};