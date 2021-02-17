/*
 * GameState.h
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */
#include <string>
#include <vector>
#include <fstream>
#ifndef GAMESTATE_H_
#define GAMESTATE_H_

class GameState {
private:
	string _word;
	string _uword;
	char _guess;
	int _numGuess;
public:
	GameState();
	GameState(string ,string, char , int);
	void setWord(string);
	void setUword(string);
	string getWord()const;
	int checkGuess(char);
	int getGuess();
	void incguess();
};
#endif /* GAMESTATE_H_ */

//search with while loop
//every letter

