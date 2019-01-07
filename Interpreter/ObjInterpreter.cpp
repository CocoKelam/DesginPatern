#include "stdafx.h"
#include <string.h>
#include "ObjInterpreter.h"


ObjInterpreter::ObjInterpreter()
{
}


ObjInterpreter::~ObjInterpreter()
{
}

void ObjInterpreter::interpreter(setence& _setence)
{

	char * pTem = NULL;
	if (pTem = strstr(_setence.input, "English"))
	{
		strcpy_s(_setence.input, sizeof(_setence.input), pTem + strlen("English"));
		strcat_s(_setence.output,sizeof(_setence.output), "”¢”Ô");
	}
	else if (pTem = strstr(_setence.input, "Chinese"))
	{
		strcpy_s(_setence.input, sizeof(_setence.input), pTem + strlen("Chinese"));
		strcat_s(_setence.output, sizeof(_setence.output), "∫∫”Ô");
	}
	else if (pTem = strstr(_setence.input,"Japanese") )
	{
		strcpy_s(_setence.input, sizeof(_setence.input), pTem + strlen("Japanese"));
		strcat_s(_setence.output, sizeof(_setence.output), "»’”Ô");
	}
}
