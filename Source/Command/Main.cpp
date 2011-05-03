/********************************************************************
	created:	2006/08/04
	filename: 	main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Command模式的测试代码
*********************************************************************/

#include "Command.h"
#include <stdlib.h>

int main()
{
	Receiver* pReceiver = new Receiver();
	Command*  pCommand  = new ConcreateComand(pReceiver);
	Invoker*  pInvoker  = new Invoker(pCommand);

	pInvoker->Invoke();

	delete pInvoker;



	return 0;
}
