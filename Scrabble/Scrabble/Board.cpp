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
	if ((isDown && y + word.length() > 15) || (!isDown && x + word.length() > 15)) {
		throw "Word goes outside of the bounds of the board.";
	}
	
	for (int i = 0; i < word.length(); i++) {
		if (isDown) {
			tiles[y+i][x].addLetter(word[i]);
		}
		else {
			tiles[y][x+i].addLetter(word[i]);
		}
	}
	return 0; // Remove later
}
