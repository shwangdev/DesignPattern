/********************************************************************
	created:	2006/08/09
	filename: 	Visitor.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Visitor模式的演示代码
*********************************************************************/

#include "Visitor.h"
#include <iostream>

void ConcreateElementA::Accept(Visitor &rVisitor)
{
	rVisitor.VisitConcreateElementA(this);
}

void ConcreateElementB::Accept(Visitor &rVisitor)
{
	rVisitor.VisitConcreateElementB(this);
}

void ConcreateVisitorA::VisitConcreateElementA(ConcreateElementA *pConcreateElementA)
{
	std::cout << "VisitConcreateElementA By ConcreateVisitorA\n";
}

void ConcreateVisitorA::VisitConcreateElementB(ConcreateElementB *pConcreateElementA)
{
	std::cout << "VisitConcreateElementB By ConcreateVisitorA\n";
}

void ConcreateVisitorB::VisitConcreateElementA(ConcreateElementA *pConcreateElementA)
{
	std::cout << "VisitConcreateElementA By ConcreateVisitorB\n";
}

void ConcreateVisitorB::VisitConcreateElementB(ConcreateElementB *pConcreateElementA)
{
	std::cout << "VisitConcreateElementB By ConcreateVisitorB\n";
}
