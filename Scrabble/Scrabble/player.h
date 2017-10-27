#pragma once

#include <iostream>
using namespace std;

class Player {
public:
	//void playTurn();
	void printLetters();



private:
	char myLetters[7] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	int score;

};