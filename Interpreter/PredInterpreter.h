#pragma once
#include "IInterpreter.h"
class PredInterpreter : public IInterpreter
{
public:
	PredInterpreter();
	~PredInterpreter();

	virtual void interpreter(setence& _setence);
};

