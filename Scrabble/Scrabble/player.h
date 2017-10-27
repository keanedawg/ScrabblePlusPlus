#pragma once

#include <iostream>
using namespace std;

class Player {
public:
	//void playTurn();
	void printLetters();
	void getLetters(char letters[], int size);
	bool hasLetter(char letter);


private:
	int letterCount = 7;
	int myLetters[27] = {};
	int score = 0;
};