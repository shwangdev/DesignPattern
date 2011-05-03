/********************************************************************
	created:	2006/08/05
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	State模式的测试代码
*********************************************************************/

#include "State.h"

int main()
{
	State *pState = new ConcreateStateA();
	Context *pContext = new Context(pState);
	pContext->Request();
	pContext->Request();
	pContext->Request();

	delete pContext;

	return 0;
}