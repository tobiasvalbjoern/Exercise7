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

OptCharacter opt;
OptWord opt2;
int main(int argc, char** argv)
{
	string validOpt = "abo";
	string validOpt2= "log";
	string validOpt3= "help";

	//create a pointer to an object
	OptCharacter *obj;
	//Allocate memory in the heap and make obj point to it.
	obj=new OptCharacter(argc,(const char**) argv);
	//copy the dynamic object to the global object, so we can use the global
	//object in a greater scope.
	opt=*obj;


	//create a pointer to an object
		OptWord *obj2;
		//Allocate memory in the heap and make obj point to it.
		obj2=new OptWord(argc,(const char**) argv);
		//copy the dynamic object to the global object, so we can use the global
		//object in a greater scope.
		opt2=*obj2;


	//send the information about valid options
	opt.setOptstring(validOpt);
	opt2.setOptstring(validOpt2);

	int args = opt.numopt();

	cout << "Number of valid '-chars' on command line: " << args
				<< endl;

	args = opt2.numopt();

	cout << "Number of valid '--wordoption1' on command line: " << args
					<< endl;

	opt2.setOptstring(validOpt3);
	args = opt2.numopt();

		cout << "Number of valid '--wordoption2' on command line: " << args
						<< endl;


	return 0;
}
