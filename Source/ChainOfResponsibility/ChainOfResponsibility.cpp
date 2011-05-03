/********************************************************************
	created:	2006/07/20
	filename: 	ChainOfResponsibility.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	ChainOfResponsibility模式的演示代码
*********************************************************************/

#include "ChainOfResponsibility.h"
#include <iostream>

Handler::Handler(Handler *pSuccessor /* = NULL*/) 
	: m_pSuccessor(pSuccessor)
{
}

Handler::~Handler()
{
	delete m_pSuccessor;
	m_pSuccessor = NULL;
}

void ConcreateHandler1::HandleRequset()
{
	if (NULL != m_pSuccessor)
	{
		m_pSuccessor->HandleRequset();
	}
	else
	{
		std::cout << "HandleRequset by ConcreateHandler1\n";
	}
}

void ConcreateHandler2::HandleRequset()
{
	if (NULL != m_pSuccessor)
	{
		m_pSuccessor->HandleRequset();
	}
	else
	{
		std::cout << "HandleRequset by ConcreateHandler2\n";
	}
}

