/********************************************************************
	created:	2006/07/20
	filename: 	Main.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Composite模式的测试代码
*********************************************************************/

#include "Composite.h"
#include <stdlib.h>

int main()
{
	Leaf *pLeaf1 = new Leaf();
	Leaf *pLeaf2 = new Leaf();

	Composite* pComposite = new Composite;
	pComposite->Add(pLeaf1);
	pComposite->Add(pLeaf2);
	pComposite->Operation();
	pComposite->GetChild(2)->Operation();

	delete pComposite;



	return 0;
}