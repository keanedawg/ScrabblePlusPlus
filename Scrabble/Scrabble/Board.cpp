#include "board.h"

void Board::printBoard() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << tiles[i][j].print() << " ";
		}
		cout << "\n";
	}
}

/*adds a word to the board. Returns the score back to the user. Returns -1 if word cannot be added.*/
int Board::addWord(int x, int y, string word, bool isDown) {
	for (int i = 0; i < word.length(); i++) {
		tiles[x][y + i].addLetter(word[i]);
	}
	return 0; // Remove later
}
