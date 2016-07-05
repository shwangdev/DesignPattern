/********************************************************************
	created:	2006/08/04
	filename: 	Iterator.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Iterator模式的演示代码
*********************************************************************/

#include <iostream>
#include "Iterator.h"

ConcreteAggregate::ConcreteAggregate(int nSize)
	: m_nSize(nSize)
	, m_pData(NULL)
{
	m_pData = new DATA[m_nSize];
	
	for (int i = 0; i < nSize; ++i)
	{
		m_pData[i] = i;
	}
}

ConcreteAggregate::~ConcreteAggregate()
{
	delete [] m_pData;
	m_pData = NULL;
}

Iterater* ConcreteAggregate::CreateIterater(Aggregate *pAggregate)
{
	return new ConcreteIterater(this);
}

int ConcreteAggregate::GetSize()
{
	return m_nSize;
}

DATA ConcreteAggregate::GetItem(int nIndex)
{
	if (nIndex < m_nSize)
	{
		return m_pData[nIndex];
	}
	else
	{
		return -1;
	}
}

ConcreteIterater::ConcreteIterater(Aggregate* pAggregate)
	: m_pConcreteAggregate(pAggregate)
	, m_nIndex(0)
{

}

void ConcreteIterater::First()
{
	m_nIndex = 0;
}

void ConcreteIterater::Next()
{
	if (m_nIndex < m_pConcreteAggregate->GetSize())
	{
		++m_nIndex;
	}
}

bool ConcreteIterater::IsDone()
{
	return m_nIndex == m_pConcreteAggregate->GetSize();
}

DATA ConcreteIterater::CurrentItem()
{
	return m_pConcreteAggregate->GetItem(m_nIndex);
}


