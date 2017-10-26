#include "board.h"

void Board::printBoard() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << tiles[i][j].print() << " ";
		}
		cout << "\n";
	}
}


int Board::addWord(int start, bool isDown) {

}
