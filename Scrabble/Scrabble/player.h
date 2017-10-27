#pragma once

#include <iostream>
using namespace std;

class Player {
public:
	//void playTurn();
	void printLetters();
	void getNewLetters(int lettersToGet);
	bool hasLetter(char letter);


private:
	int letterCount = 7;
	char myLetters[7] = { 'A', 'S', 'T', 'U', 'D', 'Y', 'G' };
	int score = 0;

};