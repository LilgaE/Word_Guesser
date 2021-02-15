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
using namespace std;
//#include "GameState.h"
#include "Player.h"
#include "Dictionary.h"

	int Kplaying = 1;
	string test = "";
	Dictionary Dict("");
	Player Play("",0,0);
	//GameState GS;
	string openFile = "";
	string user = "test";


void RunTest(int Run){
	if (Run == 1){
		openFile = "Words.txt";
		cout << "Thank you for playing" << endl;
	}
	if (Run == 2){
		cout << "Please enter a word." << endl;
		cout << "Please enter a single ! to finish entering word." << endl;
		while (user != "!"){
			cin >> user;
		Dict.setWord(user);
	}
		openFile = "Words.txt";
	}
	if (Run == 3){
		cout << "Have a nice day!" << endl;
	exit(0);
	}
	//GS.setWord(Dict.getRandWord(openFile));
//while (Kplaying != 0){
}
//void GameRunTime()








//pre (What you want/expect coming in)
//post (What is output by the function)
//desc (How the output is achieved)

int main() {
	int Run;
	cout << "Welcome to the wild word guessing game!" << endl << "Please enter 1 to use the premade dictionary." << endl << "Please enter 2 to create your own dictionary." << endl << "Please enter 3 to not play, and end the program, like a loser XD.";
		//First prompt
	cin >> Run;
	RunTest(Run);



return 0;
}
