/********************************************************************
	created:	2006/07/26
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Proxy模式的测试代码
*********************************************************************/

#include "Proxy.h"
#include <stdlib.h>

int main()
{
	Subject* pProxy = new Proxy();
	pProxy->Request();

	delete pProxy;



	return 0;
}
