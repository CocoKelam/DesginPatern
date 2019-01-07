#include "stdafx.h"
#include <string.h>
#include "PredInterpreter.h"


PredInterpreter::PredInterpreter()
{
}


PredInterpreter::~PredInterpreter()
{
}

void PredInterpreter::interpreter(setence& _setence)
{
	char * pTem = NULL;
	if (pTem = strstr(_setence.input,"like"))
	{
		strcpy_s(_setence.input, sizeof(_setence.input), pTem + strlen("like"));
		strcat_s(_setence.output, sizeof(_setence.output), "œ≤ª∂");
	}
	else if (pTem = strstr(_setence.input, "hate"))
	{
		strcpy_s(_setence.input, sizeof(_setence.input), pTem + strlen("hate"));
		strcat_s(_setence.output, sizeof(_setence.output), "Ã÷—·");
	}
}
