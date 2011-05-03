/********************************************************************
	created:	2006/07/20
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Prototype模式的测试代码
*********************************************************************/

#include "Prototype.h"
#include <stdlib.h>

int main()
{
	Prototype* pPrototype1 = new ConcreatePrototype1();
	Prototype* pPrototype2 = pPrototype1->Clone();

	Prototype* pPrototype3 = new ConcreatePrototype2();
	Prototype* pPrototype4 = pPrototype3->Clone();

	delete pPrototype1;
	delete pPrototype2;
	delete pPrototype3;
	delete pPrototype4;



	return 0;
}