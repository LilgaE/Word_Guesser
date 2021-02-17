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




string RunWords(int Run, Dictionary dict){
	if (Run == 1){
		dict.fromfile("Words.txt");
		return dict.getRandWord();
	} else if (Run == 2){
		cout << "Please enter a word." << endl;
		cout << "Please enter a single ! to finish entering word." << endl;
		string in;
		cin >> in;
		while (in != "!"){
			dict.setWord(in);
			cin >> in;
		}
		return dict.getRandWord();
	} else if (Run == 3){
		cout << "Have a nice day!" << endl;
		exit(0);
	}
	return "";
}

int main() {
	Dictionary dict;
	Player play("",0,0);
	GameState gs;
	int run;
	int pos;
	int size;
	int i = 0;
	string word;
	string uword;
	string name;
	char guess;
	vector<string> wordvec;



	cout << "Welcome to the wild word guessing game!" << endl << "Please enter 1 to use a premade dictionary(file)." << endl << "Please enter 2 to create your own dictionary." << endl << "Please enter 3 to not play, and end the program.";
	//First prompt
	cin >> run;
while (run == 1 || run == 2){
	word = RunWords(run,dict);
	cout << word << endl;
	size = word.size();
	gs.setWord(word);
	uword = "";
	while(i < size ){
		uword = uword + "_";
		i++;
		cout<<uword<<endl;
	}
	while (gs.getGuess() != size+1){
		cout << "Please enter a guess." << endl;
		cout << size - gs.getGuess() << " trys left." << endl;
		cin >> guess;
		pos = gs.checkGuess(guess);
		if (pos == 999 || uword == word){
			cout << "YAY!" << endl;
			play.incWins();
		}
		else if (pos == -1){
			cout << "Does not contain " << guess << endl;
			cout << uword<<endl;
		}else{
			uword[pos] = guess;
			cout << uword<<endl;
		}
		gs.incguess();
		if  (gs.getGuess() == size && uword != word){
			play.incLosses();
		}
	}
	cout<<"please enter your player name"<<endl;
	cin >> name;
	play.setPname(name);
	cout << play.getWins()<< " wins"<<endl;
	cout << play.getLosses() << " losses"<<endl;
	cout <<"thank you for playing."<< "To play again enter 1 for the file."<<endl<< "or enter 2 to create your own."<<endl<<"to terminate program enter 3.";
	cin >> run;
}
return 0;
}
