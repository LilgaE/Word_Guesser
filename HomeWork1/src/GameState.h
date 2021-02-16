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
	string _guess;
	string _wordState;
	int _numGuess;
public:
	GameState();
	GameState(string ,string , int);
	void setWord(string);
	string getWord()const;
	string checkGuess(string);
	int getGuess();
	string wordState();
	void setWordState(string, int);
};
#endif /* GAMESTATE_H_ */

//search with while loop
//every letter

