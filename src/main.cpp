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
using namespace std;

OptCharacter opt;
int main(int argc, char** argv)
{
	string validOpt = "abo";

	//create a pointer to an object
	OptCharacter *obj;

	//Allocate memory in the heap and make obj point to it.
	obj=new OptCharacter(argc,(const char**) argv);

	//copy the dynamic object to the global object, so we can use the global
	//object in a greater scope.
	opt=*obj;

	//send the information about valid options
	opt.setOptstring(validOpt);


	int cnt = opt.numopt();

	cout << "Number of valid options on command line: " << cnt
				<< endl;

	/*
	for (int i = 0; i < cnt; i++)
	{

	}
*/
	return 0;
}
