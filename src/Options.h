/*
 * Options.h
 *
 *  Created on: 29 Aug 2017
 *      Author: Tobias
 */

#ifndef OPTIONS_H_
#define OPTIONS_H_
#include <string>
//always remember to use this.
using namespace std;
class Options
{
public:
	//default constructor
	Options();

	//destructor
	virtual ~Options();

	//This is used to copy the validoptions to our class
	virtual void setOptstring(string validopt)=0;

	//returns the found valid options
	virtual int getopt(void)=0;

	//counts the number of valid options
	int numopt(void);

protected:
	int argC,count;
	char **argV;
	string optstring;

};

#endif /* OPTIONS_H_ */
