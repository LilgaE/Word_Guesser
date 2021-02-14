/*
 * Dictionary.h
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#ifndef DICTIONARY_H_
#define DICTIONARY_H_

class Dictionary {
private:
	string _word;

public:
	Dictionary();
	Dictionary(string);
	void setWord(string);
	string getRandWord(string);
};

#endif /* DICTIONARY_H_ */
