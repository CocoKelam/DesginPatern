// Interpreter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

#include "IInterpreter.h"


using namespace std;





int _tmain(int argc, _TCHAR* argv[])
{
	setence      _setence;
	IInterpreter _interpreter;

	memset(&_setence, 0, sizeof(_setence));

	char szInput[200] = {0};
	while (1)
	{
		std::cout << "Please input the English sentence and I will interpreter it to Chinese " << std::endl;
		cin.getline(_setence.input, sizeof(_setence.input));
		

		if (!_stricmp(_setence.input, "q"))
		{
			break;
		}
		else
		{
			_interpreter.Interpreter(_setence);
		}
	

		std::cout << "after interpreter the meaning of the setence is:" << _setence.output << std::endl;
		memset(&_setence, 0, sizeof(_setence));
	}
	

	system("pause");
	return 0;
}

