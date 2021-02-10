/*
 * Dictionary.cpp
 *
 *  Created on: Feb 3, 2021
 *      Author: lilga
 */
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include "Dictionary.h"

Dictionary::Dictionary(string w) {
	_word = w;

}
void Dictionary::setWord(string w){
	//write to a file

}
string Dictionary::getRandWord(string f){
	//pre (What you want/expect coming in)
	//post (What is output by the function)
	//desc (How the output is achieved)
	//pre:  A file containing all lower case words.
	//post: A random word from the file.
	//desc: Fills a vector with a file then gets a random word from the vector
	vector<string> WordVec;
	ifstream infile(f);
	if(!infile){
		cout << "file not found" << endl;
			exit(-1);
	}else{
		cout << "file loaded" << endl;
	}
		string word;
		infile >> word;
		while(!infile.eof()){
			WordVec.push_back(word);
			infile >> word;
	}
	_word = WordVec[rand() % WordVec.size()];
	return _word;
}


