#pragma once

#include "tile.h"
#include <iostream>
using namespace std;

class Board {
private:
	const int size = 15;
	Tile tiles[15][15];

public:
	void printBoard();
	Board();
};