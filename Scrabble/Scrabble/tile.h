#pragma once



class Tile {
public:
	Tile(char type) : type(type) {}

	inline bool isEmpty() { return letter == ' '; }  // does it have a letter on it?
	inline void addLetter(char letter) { this->letter = letter; };
	char print();

private:
	char type; // Is it a normal tile, 4x word, 3x letter?
	char letter;   // The letter on it, set to ' ' by default.
};