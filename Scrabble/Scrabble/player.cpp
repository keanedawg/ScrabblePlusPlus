#include "player.h"


void Player::printLetters() {
	cout << "Your letters are: ";
	for (int i = 0; i < 7; i++) {
		cout << myLetters[i] << ' ';
	}
	cout << '\n';
}