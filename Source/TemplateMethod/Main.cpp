/********************************************************************
	created:	2006/07/20
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	TemplateMethod模式的测试代码
*********************************************************************/

#include "TemplateMethod.h"
#include <stdlib.h>

int main()
{
	AbstractClass* pConcreateClass = new ConcreateClass;
	pConcreateClass->TemplateMethod();

	delete pConcreateClass;



	return 0;
}
