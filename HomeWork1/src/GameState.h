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
	vector<string> _wordState;
	int _numGuess;
public:
	GameState();
	GameState(string ,string , int);
	void setWord(string);
	string getWord()const;
	int checkGuess(string);
	int getGuess();
	string wordState();
	void setWordState(vector<string>);
};
#endif /* GAMESTATE_H_ */

//search with while loop
//every letter

