/*
 * Player.cpp
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */
#include <string>
using namespace std;
#include "Player.h"


Player::Player(string n, int w, int l) {
	_name = n;
	_wins = w;
	_losses = l;
}
void Player::setPname(string n){
		_name = n;
	}
void Player::incWins(){
		_wins++;
	}
void Player::incLosses(){
		_losses++;
	}
string Player::getPname()const{
	return _name;
	}
int Player::getWins()const{
	return _wins;
	}
int Player::getLosses()const{
	return _losses;
	}



