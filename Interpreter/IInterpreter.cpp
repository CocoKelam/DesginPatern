#include "stdafx.h"
#include "IInterpreter.h"
#include "SubjInterpreter.h"
#include "PredInterpreter.h"
#include "ObjInterpreter.h"

IInterpreter::IInterpreter()
{
	
}


IInterpreter::~IInterpreter()
{
	if (pSubj != NULL)
	{
		delete pSubj;
		pSubj = NULL;
	}
	if (pPre != NULL)
	{
		delete pPre;
		pPre = NULL;
	}
	if (pObj != NULL)
	{
		delete pObj;
		pObj = NULL;
	}
}

void IInterpreter::Interpreter(setence & _setence)
{
	if (pSubj == NULL)
	{
		pSubj = new SubjInterpreter();
	}
	
	if (pPre == NULL)
	{
		pPre = new PredInterpreter();
	}
	
	if (pObj == NULL)
	{
		pObj = new ObjInterpreter();
	}
	

	pSubj->interpreter(_setence);
	pPre->interpreter(_setence);
	pObj->interpreter(_setence);
}
