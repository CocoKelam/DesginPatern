#pragma once

//grammar:: = {subject predicate object} //语法
//subject   ::= I | You | He | She       
//predicate ::= like | hate 
//object    ::= English | Chinese | Japanese 


//**解释器模式要素**
//**1，contex类，输入和输出**
//**2，interpreter 基类：1，interpreter接口，2 语法树 (interpreter* )**
//**3，concrete interpreter 类**

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
	IInterpreter*  pSubj;  //**主**
	IInterpreter*  pPre;   //**谓**
	IInterpreter*  pObj;   //**宾**
};

