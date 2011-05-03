/********************************************************************
	created:	2006/08/09
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Visitor模式的测试代码
*********************************************************************/

#include "Visitor.h"

int main()
{
	Visitor *pVisitorA = new ConcreateVisitorA();
	Element *pElement  = new ConcreateElementA();

	pElement->Accept(*pVisitorA);

	delete pElement;
	delete pVisitorA;

	return 0;
}
