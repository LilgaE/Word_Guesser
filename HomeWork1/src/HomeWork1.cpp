//============================================================================
// Name        : HomeWork1
// Author      : ELilga
// Version     : 1.0
// Copyright   : 2/3/2021
// Description : Word guessing game! :D
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#include "GameState.h"
#include "Player.h"
#include "Dictionary.h"

	int Kplaying = 1;
	string test = "";
	Dictionary Dict;
	//Player Play();
	GameState GS;
	string FileName = "";
	string user = "test";
	ifstream infile;


void RunTest(int Run){
	if (Run == 1){
		test = Dict.getRandWord("Words.txt");
		cout << test;
	} else if (Run == 2){
		cout << "Please enter a word." << endl;
		cout << "Please enter a single ! to finish entering word." << endl;
		Dict.setWord(user);
		test = Dict.getRandWord("Uwords.txt");
		cout << test;
	} else if (Run == 3){
		cout << "Have a nice day!" << endl;
	exit(0);
	}


//while (Kplaying != 0){
}
//void GameRunTime()
//pre (What you want/expect coming in)
//post (What is output by the function)
//desc (How the output is achieved)

int main() {
	int Run = 0;
	vector<string> temp;
	string guess;
	int pos;
	cout << "Welcome to the wild word guessing game!" << endl << "Please enter 1 to use a premade dictionary(file)." << endl << "Please enter 2 to create your own dictionary." << endl << "Please enter 3 to not play, and end the program, like a loser XD.";
		//First prompt
	cin >> Run;
	RunTest(Run);
	GS.setWord(test);
	for (int i = 0 ; i < test.size(); i++){
		temp.push_back("_");
	}
	GS.setWordState(temp);
	cout << "Please enter a guess." << endl;
	cin >> guess;
	pos = GS.checkGuess(guess);
	if ( pos == 999){
		cout << "Congragulations!" << endl;
	}
	else if (pos == -1){
		cout << "Does not contain " << guess << endl;
	}
	else{
		temp[pos] = guess;
		GS.setWordState(temp);
	}

return 0;
}
