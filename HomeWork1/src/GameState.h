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
	string _Word;
	string _Guess;
	int _numGuess;



public:
	GameState();
	GameState(string , int);
	void setWord(string);
	void userGuess(string);
	int getGuess();
	void checkGuess();

};


#endif /* GAMESTATE_H_ */

//search with while loop
//every letter

