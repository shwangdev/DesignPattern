/********************************************************************
	created:	2006/07/20
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Adapter模式的测试代码
*********************************************************************/

#include "Adapter.h"
#include <stdlib.h>

int main()
{
	Adaptee *pAdaptee = new Adaptee;
	Target *pTarget = new Adapter(pAdaptee);
	pTarget->Request();

	delete pTarget;



	return 0;
}