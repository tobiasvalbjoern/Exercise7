/*
 * OptCharacter.h
 *
 *  Created on: 21 Sep 2017
 *      Author: Tobias
 */

#ifndef OPTCHARACTER_H_
#define OPTCHARACTER_H_

#include "Options.h"

class OptCharacter: public Options
{
public:
	OptCharacter();
	//explicit constructor
	OptCharacter(int argc, const char **argv);

	//copy constructor
	OptCharacter(const OptCharacter &rhs);
	virtual ~OptCharacter();
	int getopt(void);
	//void setOptstring(string validopt);
};

#endif /* OPTCHARACTER_H_ */
