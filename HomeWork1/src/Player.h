/*
 * Player.h
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */
#include <string>
#include <vector>
#include <fstream>
#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
private:
	string _name;
	int	_wins;
	int	_losses;
public:
	Player();
	Player(string, int, int);
	void setPname(string);
	void setWins(int);
	void setLosses(int);
	string getPname()const;
	int getWins()const;
	int getLosses()const;
	void savePlayer();
	Player loadPlayer();
};


#endif /* PLAYER_H_ */
