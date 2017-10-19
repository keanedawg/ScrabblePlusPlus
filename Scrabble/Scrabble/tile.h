#pragma once



class tile {
public:
	bool isEmpty();  // does it have a letter on it?



private:
	char type; // Is it a normal tile, 4x word, 3x letter?
	char letter;   // The letter on it, set to ' ' by default.
};