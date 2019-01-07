#include "stdafx.h"
#include <string.h>
#include "SubjInterpreter.h"


SubjInterpreter::SubjInterpreter()
{
}


SubjInterpreter::~SubjInterpreter()
{
}

void SubjInterpreter::interpreter(setence& _setence)
{
	char * strtemp = NULL;
	if (strtemp = strstr(_setence.input, "I"))
	{
		strcpy_s(_setence.input, sizeof(_setence.input),strtemp + strlen("I"));
		strcat_s(_setence.output, sizeof(_setence.output), "ÎÒ");
	}
	else if (strtemp = strstr(_setence.input, "You"))
	{
		strcpy_s(_setence.input, sizeof(_setence.input), strtemp + strlen("You"));
		strcat_s(_setence.output, sizeof(_setence.output), "Äã");
	}
	else if (strtemp = strstr(_setence.input, "He"))
	{
		strcpy_s(_setence.input, sizeof(_setence.input), strtemp + strlen("He"));
		strcat_s(_setence.output, sizeof(_setence.output), "Ëû");
	}
	else if (strtemp = strstr(_setence.input, "She"))
	{
		strcpy_s(_setence.input, sizeof(_setence.input), strtemp + strlen("She"));
		strcat_s(_setence.output, sizeof(_setence.output), "Ëý");
	}

}
