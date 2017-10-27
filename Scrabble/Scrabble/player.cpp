#include "player.h"

void Player::getLetters(char letters[], int size) {
	for (int i = 0; i < size; i++) {
		if ('*' == letters[i]) {
			letters[26]++;
		}
		else {
			myLetters[letters[i] - 'A']++;
		}
	}
}


void Player::printLetters() {
	cout << "Your letters are: ";
	for (int i = 0; i < 26; i++) {
		for (int hits = 0; hits < myLetters[i]; hits++) {
			cout << 'A' + i << ' ';
		}
	}
	for (int hits = 0; hits < myLetters[26]; hits++) {
		cout << '*' << ' ';
	}
	cout << '\n';
}

bool Player::hasLetter(char letter) {
	if ('*' == letter) {
		// transform '*' into the proper letter it needs to be
		letter = 'A' + 26;
	}
	if (myLetters[letter - 'A'] > 0) {
		return true;
	}
}