#pragma once



class Tile {
public:
	bool isEmpty();  // does it have a letter on it?
	int addLetter(char letter);


private:
	char type; // Is it a normal tile, 4x word, 3x letter?
	char letter;   // The letter on it, set to ' ' by default.
};