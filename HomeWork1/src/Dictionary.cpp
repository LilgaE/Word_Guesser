/*
 * Dictionary.cpp
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */
#include <string>
using namespace std;
#include "Dictionary.h"

Dictionary::Dictionary(string w) {
	_word = w;

}
void Dictionary::setWord(string w){
	//write to a file

}
string Dictionary::getRandWord(){
	//get random word from file
	return _word;
}


