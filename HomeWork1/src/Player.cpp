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

void Player::setWins(int w){
		_wins = w;
	}
void Player::setLosses(int l){
		_losses = l;
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
void Player::savePlayer(){
	//write to file with data

}
Player Player::loadPlayer{
	//read file to get player

}



