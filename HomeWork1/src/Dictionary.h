/*
 * Dictionary.h
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */

#ifndef DICTIONARY_H_
#define DICTIONARY_H_

class Dictionary {
private:
	string _word;

public:
	Dictionary();
	Dictionary(string);
	void setWord(string);
	string getRandWord();
};

#endif /* DICTIONARY_H_ */
