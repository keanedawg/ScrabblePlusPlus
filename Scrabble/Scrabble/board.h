#pragma once

#include "tile.h"


class Board {
private:
	Tile tiles[15][15];

public:
	void printBoard();
	Board();
};