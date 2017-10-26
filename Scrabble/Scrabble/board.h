#pragma once

#include "tile.h"
#include <iostream>
#include <string>
using namespace std;

class Board {
private:
	const int size = 15; 
	Tile tiles[15][15];

public:
	Board();
	void printBoard();
	int addWord(int x, int y, string word, bool isDown);
};