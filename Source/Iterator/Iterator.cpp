/********************************************************************
	created:	2006/08/04
	filename: 	Iterator.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Iterator模式的演示代码
*********************************************************************/

#include <iostream>
#include "Iterator.h"

ConcreateAggregate::ConcreateAggregate(int nSize)
	: m_nSize(nSize)
	, m_pData(NULL)
{
	m_pData = new DATA[m_nSize];
	
	for (int i = 0; i < nSize; ++i)
	{
		m_pData[i] = i;
	}
}

ConcreateAggregate::~ConcreateAggregate()
{
	delete [] m_pData;
	m_pData = NULL;
}

Iterater* ConcreateAggregate::CreateIterater(Aggregate *pAggregate)
{
	return new ConcreateIterater(this);
}

int ConcreateAggregate::GetSize()
{
	return m_nSize;
}

DATA ConcreateAggregate::GetItem(int nIndex)
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

ConcreateIterater::ConcreateIterater(Aggregate* pAggregate)
	: m_pConcreateAggregate(pAggregate)
	, m_nIndex(0)
{

}

void ConcreateIterater::First()
{
	m_nIndex = 0;
}

void ConcreateIterater::Next()
{
	if (m_nIndex < m_pConcreateAggregate->GetSize())
	{
		++m_nIndex;
	}
}

bool ConcreateIterater::IsDone()
{
	return m_nIndex == m_pConcreateAggregate->GetSize();
}

DATA ConcreateIterater::CurrentItem()
{
	return m_pConcreateAggregate->GetItem(m_nIndex);
}


