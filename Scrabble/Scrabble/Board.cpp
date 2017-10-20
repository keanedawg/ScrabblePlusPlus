#include "game.h"


void Board::printBoard() {
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cout << tiles[i][j].print() << " ";
		}
		cout << "\n";
	}
}