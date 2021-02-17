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

GameState::GameState(){}
GameState::GameState(string w,string u,char g, int n) {
		_word = w;
		_uword = u;
		_guess = g;
		_numGuess = n;
}
void GameState::setWord(string w){
	_word = w;
	}
void GameState::setUword(string u){
	_uword = u;
	}
int GameState::checkGuess(char g){
	int test = _word.size();
	int i = 0;
	char test2;
	while(i<=test){
		test2=_word[i];
		if(g == test2){
			return i;
		}
		i++;
	}
	return -1;
}
int GameState::getGuess(){
	return _numGuess;
}
void GameState::incguess(){
	_numGuess++;
}

