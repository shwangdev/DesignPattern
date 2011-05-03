/********************************************************************
	created:	2006/07/20
	filename: 	TemplateMethod.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	TemplateMethod模式的演示代码
*********************************************************************/

#include "TemplateMethod.h"
#include <iostream>

void AbstractClass::TemplateMethod()
{
	PrimitiveOperation1();
	PrimitiveOperation2();
}

void ConcreateClass::PrimitiveOperation1()
{
	std::cout << "PrimitiveOperation1 by ConcreateClass\n";
}

void ConcreateClass::PrimitiveOperation2()
{
	std::cout << "PrimitiveOperation2 by ConcreateClass\n";
}
