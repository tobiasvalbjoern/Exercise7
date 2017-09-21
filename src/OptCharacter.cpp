/*
 * OptCharacter.cpp
 *
 *  Created on: 21 Sep 2017
 *      Author: Tobias
 */

#include "OptCharacter.h"
#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>

using namespace std;

OptCharacter::OptCharacter()
{
}

OptCharacter::OptCharacter(int argc, const char **argv)
{
	argC = argc;
	argV = (char**) argv;
	optstring = "";
	count = 1;
}


//in the copy constructor, all the attributes are copied from
//the object on the right hans side (rhs)
OptCharacter::OptCharacter(const OptCharacter &rhs)
{
	argC=rhs.argC;
	argV=rhs.argV;
	optstring=rhs.optstring;
	count=rhs.count;
}



OptCharacter::~OptCharacter()
{
	// TODO Auto-generated destructor stub
}

void OptCharacter::setOptstring(string validopt)
{
	optstring = validopt;
}

int OptCharacter::getopt(void)
{
	//move through each argument on the command line until a valid option
	//is found. Then return it. Count keeps track of our progress through
	//the commandline.
	for (; count < argC; count++)
	{
		//this for loop traverses through the valid options
		for (size_t j = 0; j < optstring.size(); j++)
		{
			//if there is a - and two characters, as in "-a"
			if (argV[count][0] == '-' && strlen(argV[count])==2 )
			{
			//compare the letters.
			if(argV[count][1]==optstring[j])
					{
				count++;
				cout << "Match found: -" << optstring[j] << endl;
				return 1;

					}
				}

			}
		}

	return 0;
}
