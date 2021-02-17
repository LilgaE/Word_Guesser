/*
 * GameState.cpp
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */

#include <string>
#include <iostream>
using namespace std;
#include "GameState.h"


GameState::GameState(string w,string g, int n) {
		_word = w;
		_guess = g;
		_numGuess = n;
		_wordState;
}
void GameState::setWord(string w){
	_word = w;
	}
int GameState::checkGuess(string g){
	if (g.size() < 1){
		for (int i = 0 ; i < _word.size(); i++){
			if(g[0] == (_word[i])){
				return i;
			}
		}
	}
	if(g == _word){
		return 999;
	}
	return -1;
	}
int GameState::getGuess(){
	return 0;
}
void GameState::setWordState(vector<string> w){
	_wordState = w;
}


