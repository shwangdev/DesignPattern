/********************************************************************
	created:	2006/07/20
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	ChainOfResponsibility模式的测试代码
*********************************************************************/

#include "ChainOfResponsibility.h"
#include <stdlib.h>

int main()
{
	Handler *p1 = new ConcreateHandler1();
	Handler *p2 = new ConcreateHandler2(p1);

	p2->HandleRequset();

	delete p2;



	return 0;
}