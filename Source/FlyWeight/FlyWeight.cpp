/********************************************************************
	created:	2006/07/26
	filename: 	FlyWeight.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	FlyWeight模式的演示代码
*********************************************************************/

#include "FlyWeight.h"
#include <iostream>

inline STATE Flyweight::GetIntrinsicState()
{
	return m_State;
}

FlyweightFactory::~FlyweightFactory()
{
	std::list<Flyweight*>::iterator iter1, iter2, temp;

	for (iter1 = m_listFlyweight.begin(), iter2 = m_listFlyweight.end();
		iter1 != iter2;
		)
	{
		temp = iter1;
		++iter1;
		delete (*temp);
	}

	m_listFlyweight.clear();
}

Flyweight* FlyweightFactory::GetFlyweight(const STATE& key)
{
	std::list<Flyweight*>::iterator iter1, iter2;

	for (iter1 = m_listFlyweight.begin(), iter2 = m_listFlyweight.end();
		 iter1 != iter2;
		 ++iter1)
	{
		if ((*iter1)->GetIntrinsicState() == key)
		{
			std::cout << "The Flyweight:" << key << " already exits"<< std::endl;
			return (*iter1);
		}
	}

	std::cout << "Creating a new Flyweight:" << key << std::endl;
	Flyweight* flyweight = new ConcreateFlyweight(key);
	m_listFlyweight.push_back(flyweight);
}

void ConcreateFlyweight::Operation(STATE& ExtrinsicState)
{

}
