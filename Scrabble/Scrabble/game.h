#pragma once

#include <iostream>
#include <unordered_map>
#include <string>
#include "board.h"


class Game {
private:
	Board board;
	unordered_map<string, bool> isValid;



public:
	void startGame();


};