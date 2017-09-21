/*
 * Options.cpp
 *
 *  Created on: 29 Aug 2017
 *      Author: Tobias
 */

#include "Options.h"
#include <string>
#include <cstring>
#include <stdio.h>


Options::Options()
{
	//the default constructor needs all the private attributes
	//initialized to safe values.
	argC=0;
	argV=NULL;
	optstring = "";
	count = 1;
}


Options::~Options()
{
	//the default constructor needs all the private attributes
		//initialized to safe values.
		argC=0;
		argV=NULL;
		optstring = "";
		count = 1;
}


//move through all the arguments on the commandline
//and save the number of valid options found.
int Options::numopt(void)
{
	int number = 0;

	while(getopt()!=0)
	{
		number++;
	}

		return number;
	}
