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
	vector<string> _word;

public:
	Dictionary();
	Dictionary(vector<string>);
	void setWord(string);
	void fromfile(string);
	string getRandWord();

};

#endif /* DICTIONARY_H_ */
