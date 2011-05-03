/********************************************************************
	created:	2006/08/06
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Strategy模式的测试代码
*********************************************************************/

#include "Strategy.h"

int main()
{
	Strategy* pStrategy = new ConcreateStrategyA();
	Context*  pContext  = new Context(pStrategy);

	pContext->ContextInterface();

	delete pContext;

	return 0;
}
