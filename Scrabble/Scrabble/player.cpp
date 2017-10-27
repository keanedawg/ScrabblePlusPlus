#include "player.h"


void Player::printLetters() {
	cout << "Your letters are: ";
	for (int i = 0; i < letterCount; i++) {
		cout << myLetters[i] << ' ';
	}
	cout << '\n';
}

bool Player::hasLetter(char letter) {
	for (int i = 0; i < letterCount; i++) {
		if (letter == myLetters[i]) {
			return true;
		}
	}
}

void Player::getNewLetters(int lettersToAdd) {

}