/********************************************************************
	created:	2006/07/20
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Bridge模式的测试代码
*********************************************************************/

#include "Brige.h"
#include <stdlib.h>
#include <stdio.h>
int main()
{
	ConcreateImplementorA *pImplA = new ConcreateImplementorA();
	Abstraction *pAbstraction1 = new Abstraction(pImplA);
	pAbstraction1->Operation();

	ConcreateImplementorB *pImplB = new ConcreateImplementorB();
	Abstraction *pAbstraction2 = new Abstraction(pImplB);
	pAbstraction2->Operation();

	delete pAbstraction1;
	delete pAbstraction2;



	return 0;
}