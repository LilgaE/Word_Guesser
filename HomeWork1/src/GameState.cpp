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
		_wordState = w;
}
void GameState::setWord(string w){
	_word = w;
	}
string GameState::checkGuess(string g){
	string temp = _word;
	if (g.size() < 1){
		for (int i = 0 ; i < temp.size(); i++){
			if(g[0] == (temp[i])){
				setWordState(g,i);
			}
		}
	}
	if(g == _word){
		return _word;
	}
	return _wordState;
	}
int GameState::getGuess(){
	return 0;
	}
void GameState::setWordState(string g, int t){
	_wordState[t] = g;
}
string GameState::wordState(){
	for (int i = 0; i < _wordState.size(); i++){
			 _wordState[i] = "_";
		 }
	return _wordState;
}


