#pragma once

//grammar:: = {subject predicate object} //�﷨
//subject   ::= I | You | He | She       
//predicate ::= like | hate 
//object    ::= English | Chinese | Japanese 


//**������ģʽҪ��**
//**1��contex�࣬��������**
//**2��interpreter ���ࣺ1��interpreter�ӿڣ�2 �﷨�� (interpreter* )**
//**3��concrete interpreter ��**

typedef struct  st_setence
{
	char input[100];

	char output[100];

}setence, lpsetence;



class IInterpreter
{
public:
	IInterpreter();
	~IInterpreter();

	void         Interpreter(setence & _setence);
	virtual void interpreter(setence & _setence) {}

private:
	IInterpreter*  pSubj;  //**��**
	IInterpreter*  pPre;   //**ν**
	IInterpreter*  pObj;   //**��**
};

