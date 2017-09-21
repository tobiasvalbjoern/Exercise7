/*
 * OptWord.h
 *
 *  Created on: 21 Sep 2017
 *      Author: Tobias
 */

#ifndef OPTWORD_H_
#define OPTWORD_H_

#include "Options.h"

class OptWord: public Options
{
public:
	OptWord();
	virtual ~OptWord();

	//explicit constructor
	OptWord(int argc, const char **argv);
	//copy constructor
	OptWord(const OptWord &rhs);
	int getopt(void);
	void setOptstring(string validopt);
};

#endif /* OPTWORD_H_ */
