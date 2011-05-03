/********************************************************************
	created:	2006/08/04
	filename: 	Command.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Command模式的演示代码
*********************************************************************/

#include "Command.h"
#include <iostream>

void Receiver::Action()
{
	std::cout << "Receiver Action\n";
}

Invoker::Invoker(Command *pCommand)
	: m_pCommand(pCommand)
{

}

Invoker::~Invoker()
{
	delete m_pCommand;
	m_pCommand = NULL;
}

void Invoker::Invoke()
{
	if (NULL != m_pCommand)
	{
		m_pCommand->Execute();
	}
}

ConcreateComand::ConcreateComand(Receiver* pReceiver)
	: m_pReceiver(pReceiver)
{

}

ConcreateComand::~ConcreateComand()
{
	delete m_pReceiver;
	m_pReceiver = NULL;
}

void ConcreateComand::Execute()
{
	if (NULL != m_pReceiver)
	{
		m_pReceiver->Action();
	}

	std::cout << "Execute by ConcreateComand\n";
}
