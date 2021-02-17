/*
 * Dictionary.cpp
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
using namespace std;
#include "Dictionary.h"

Dictionary::Dictionary(){}
Dictionary::Dictionary(vector<string> w) {
	_word = w;
}
void Dictionary::setWord(string w){
	_word.push_back(w);
}
void Dictionary::fromfile(string w){
	//pre (What you want/expect coming in)
	//post (What is output by the function)
	//desc (How the output is achieved)
	//pre:  A file containing all lower case words.
	//post: A random word from the file.
	//desc: Fills a vector with a file then gets a random word from the vector
	ifstream infile(w);
	string word;
	if(!infile){
		exit(-1);
	}
	infile >> word;
	while(!infile.eof()){
		_word.push_back(word);
		infile >> word;
	}
}
string Dictionary::getRandWord(){
	srand (time(NULL));
	return _word[rand() % _word.size()];
}

