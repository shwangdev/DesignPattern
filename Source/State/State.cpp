/********************************************************************
	created:	2006/08/05
	filename: 	State.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	State模式的演示代码
*********************************************************************/

#include "State.h"
#include <iostream>

Context::Context(State* pState)
	: m_pState(pState)
{

}

Context::~Context()
{
	delete m_pState;
	m_pState = NULL;
}

void Context::Request()
{
	if (NULL != m_pState)
	{
		m_pState->Handle(this);
	}
}

void Context::ChangeState(State *pState)
{
	if (NULL != m_pState)
	{
		delete m_pState;
		m_pState = NULL;
	}
	
	m_pState = pState;
}

void ConcreateStateA::Handle(Context* pContext)
{
	std::cout << "Handle by ConcreateStateA\n";
	
	if (NULL != pContext)
	{
		pContext->ChangeState(new ConcreateStateB());
	}
}

void ConcreateStateB::Handle(Context* pContext)
{
	std::cout << "Handle by ConcreateStateB\n";

	if (NULL != pContext)
	{
		pContext->ChangeState(new ConcreateStateA());
	}
}
