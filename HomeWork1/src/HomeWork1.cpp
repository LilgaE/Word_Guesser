//============================================================================
// Name        : HomeWork1
// Author      : ELilga
// Version     : 1.0
// Copyright   : 2/3/2021
// Description : Word guessing game! :D
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	int RunTest = 0;
	cout << "Welcome to the wild word guessing game!" << endl << "Please enter 1 to use the premade dictionary." << endl << "Please enter 2 to create your own dictionary." << endl << "Please enter 3 to not play, and end the program, like a loser XD.";
	cin >> RunTest;
	if (RunTest == 1){
		ifstream infile("Words.txt");
			if(!infile){
				cout << "file not found" << endl;
				exit(-1);
			}
			while(!infile.eof()){

					test.push_back(c);
					cout << s1 << s2 << endl;
					infile >> s1 >> s2;
			}
		cout << "test" << endl;

	}
	if (RunTest == 2){

		}
	if (RunTest == 3){
		cout << "Goodbye loser :P" << endl;
		exit(0);
		}

	return 0;
}
