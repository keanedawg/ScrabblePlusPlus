#include "game.h"

/*Initializes the board setting up all of the special letters. 
  All letters are assumed to be empty char and no type by default,
  so we only handle special cases. */
Board::Board() {
	tiles[0][0] = Tile('$');
	tiles[0][3] = Tile('!');
	tiles[0][7] = Tile('$');
	tiles[0][11] = Tile('!');
	tiles[0][14] = Tile('$');
	
	tiles[1][1] = Tile('#');
	tiles[1][5] = Tile('@');
	tiles[1][9] = Tile('@');
	tiles[1][13] = Tile('#');
}

void Board::printBoard() {
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cout << tiles[i][j].print() << " ";
		}
		cout << "\n";
	}
}

