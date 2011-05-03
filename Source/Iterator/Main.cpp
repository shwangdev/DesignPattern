/********************************************************************
	created:	2006/08/08
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Iterater模式的演示代码
*********************************************************************/

#include "Iterator.h"
#include <iostream>

int main()
{
	Aggregate* pAggregate = new ConcreateAggregate(4);
	Iterater*  pIterater  = new ConcreateIterater(pAggregate);

	for (; false == pIterater->IsDone(); pIterater->Next())
	{
		std::cout << pIterater->CurrentItem() << std::endl;
	}

	return 0;
}