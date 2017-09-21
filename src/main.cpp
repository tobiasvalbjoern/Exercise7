//============================================================================
// Name        : Exercise4.cpp
// Author      : Tobias Valbjørn
// Version     :
// Copyright   : Free for all
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Options.h"
#include "OptCharacter.h"
#include "OptWord.h"
using namespace std;

OptCharacter opt_chars;
OptWord opt_words;
int main(int argc, char** argv)
{
	string validChars = "abo";

	//number of valid options.
	int i = 2;
	string validWords[i];
	validWords[0] = "log";
	validWords[1] = "help";


	//create a pointer to an object
	OptCharacter *obj;
	//Allocate memory in the heap and make obj point to it.
	obj = new OptCharacter(argc, (const char**) argv);
	//copy the dynamic object to the global object, so we can use the global
	//object in a greater scope.
	opt_chars = *obj;

	//create a pointer to an object
	OptWord *obj2;
	//Allocate memory in the heap and make obj point to it.
	obj2 = new OptWord(argc, (const char**) argv);
	//copy the dynamic object to the global object, so we can use the global
	//object in a greater scope.
	opt_words = *obj2;

	//send the information about valid options
	opt_chars.setOptstring(validChars);

	int args = opt_chars.numopt();

	if (args != 0)
	{
		cout << "Number of valid '-chars' on command line: " << args << endl;
	}

	for (int j = 0; j < i; j++)
	{
		opt_words.setOptstring(validWords[j]);
		args = opt_words.numopt();

		if (args != 0)
		{
			cout << "Number of valid '"
					<< validWords[j] <<"' on command line: " << args
					<< endl;
		}

	}
	return 0;
}
