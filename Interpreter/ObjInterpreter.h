#pragma once
#include "IInterpreter.h"
class ObjInterpreter :
	public IInterpreter
{
public:
	ObjInterpreter();
	~ObjInterpreter();


	virtual void interpreter(setence& _setence);
};

