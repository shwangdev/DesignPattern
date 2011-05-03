/********************************************************************
	created:	2006/08/06
	filename: 	Strategy.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Strategy模式的演示代码
*********************************************************************/

#include <iostream>
#include "Strategy.h"

Context::Context(Strategy *pStrategy)
	: m_pStrategy(pStrategy)
{
}

Context::~Context()
{
	delete m_pStrategy;
	m_pStrategy = NULL;
}

void Context::ContextInterface()
{
	if (NULL != m_pStrategy)
	{
		m_pStrategy->AlgorithmInterface();
	}
}

void ConcreateStrategyA::AlgorithmInterface()
{
	std::cout << "AlgorithmInterface Implemented by ConcreateStrategyA\n";
}
