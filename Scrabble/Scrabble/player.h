#pragma once

#include <iostream>
using namespace std;

class Player {
public:
	//void playTurn();
	void printLetters();



private:
	char myLetters[7] = { 'A', 'S', 'T', 'U', 'D', 'Y', 'G' };
	int score = 0;

};