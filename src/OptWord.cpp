/*
 * OptWord.cpp
 *
 *  Created on: 21 Sep 2017
 *      Author: Tobias
 */

#include "OptWord.h"
#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>

using namespace std;
OptWord::OptWord()
{
	// TODO Auto-generated constructor stub

}

OptWord::OptWord(int argc, const char **argv)
{
	argC = argc;
	argV = (char**) argv;
	optstring = "";

	count = 1;
}

OptWord::~OptWord()
{
	// TODO Auto-generated destructor stub
}

//in the copy constructor, all the attributes are copied from
//the object on the right hans side (rhs)
OptWord::OptWord(const OptWord &rhs)
{
	argC = rhs.argC;
	argV = rhs.argV;
	optstring = rhs.optstring;
	count = rhs.count;
}

void OptWord::setOptstring(string validopt)
{
	optstring = validopt;
}

int OptWord::getopt(void)
{
	//move through each argument on the command line until a valid option
	//is found. Then return it. Count keeps track of our progress through
	//the commandline.
	for (; count < argC; count++)
	{

		//if there is a - and two characters, as in "-a"
		if (argV[count][0] == '-' && argV[count][1] == '-'
				&& strlen(argV[count]) > 3)
		{
			string str(argV[count]+2);
			//compare the letters.
			//if it does not find anything it will return -1
			if (size_t x = optstring.find(str) != -1)
			{
				count++;
				cout << "Match found: --"
						<< str
						/*<< optstring.substr((int) x, strlen(argV[count]))*/
						<< endl;
				return 1;

			}
		}

	}

	return 0;
}
