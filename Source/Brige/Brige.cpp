/********************************************************************
	created:	2006/07/20
	filename: 	Brige.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Brige模式的演示代码
*********************************************************************/

#include "Brige.h"
#include <iostream>

void ConcreateImplementorA::OperationImpl()
{
	std::cout << "Implementation by ConcreateImplementorA\n";
}

void ConcreateImplementorB::OperationImpl()
{
	std::cout << "Implementation by ConcreateImplementorB\n";
}

Abstraction::Abstraction(Implementor* pImplementor)
	: m_pImplementor(pImplementor)
{
}

Abstraction::~Abstraction()
{
	delete m_pImplementor;
	m_pImplementor = NULL;
}

void Abstraction::Operation()
{
	m_pImplementor->OperationImpl();
}