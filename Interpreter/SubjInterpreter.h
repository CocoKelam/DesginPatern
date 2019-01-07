#pragma once
#include "IInterpreter.h"

class SubjInterpreter : public IInterpreter
{
public:
	SubjInterpreter();
	~SubjInterpreter();

	virtual void interpreter(setence& _setence);
};

