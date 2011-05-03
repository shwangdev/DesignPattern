/********************************************************************
	created:	2006/07/20
	filename: 	Composite.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Composite模式的演示代码
*********************************************************************/

#include "Composite.h"
#include <iostream>
#include <algorithm>

/*-------------------------------------------------------------------
	Component成员函数的实现

 -------------------------------------------------------------------*/
void Component::Add(Component* pChild)
{

}

void Component::Remove(Component* pChild)
{

}

Component* Component::GetChild(int nIndex)
{
	return NULL;
}

/*-------------------------------------------------------------------
	Leaf成员函数的实现

-------------------------------------------------------------------*/
void Leaf::Operation()
{
	std::cout << "Operation by leaf\n";
}

/*-------------------------------------------------------------------
	Composite成员函数的实现

-------------------------------------------------------------------*/
Composite::~Composite()
{
	std::list<Component*>::iterator iter1, iter2, temp;

	for (iter1  = m_ListOfComponent.begin(), iter2 = m_ListOfComponent.end();
		 iter1 != iter2;
		 )
	{
		temp = iter1;
		++iter1;
		delete (*temp);
	}
}

void Composite::Add(Component* pChild)
{
	m_ListOfComponent.push_back(pChild);
}

void Composite::Remove(Component* pChild)
{
	std::list<Component*>::iterator iter;

	iter = find(m_ListOfComponent.begin(), m_ListOfComponent.end(), pChild);

	if (m_ListOfComponent.end() != iter)
	{
		m_ListOfComponent.erase(iter);
	}
}

Component* Composite::GetChild(int nIndex)
{
	if (nIndex <= 0 || nIndex > m_ListOfComponent.size())
		return NULL;

	std::list<Component*>::iterator iter1, iter2;
	int i;
	for (i = 1, iter1  = m_ListOfComponent.begin(), iter2 = m_ListOfComponent.end();
		iter1 != iter2;
		++iter1, ++i)
	{
		if (i == nIndex)
			break;
	}

	return *iter1;
}

void Composite::Operation()
{
	std::cout << "Operation by Composite\n";

	std::list<Component*>::iterator iter1, iter2;

	for (iter1  = m_ListOfComponent.begin(), iter2 = m_ListOfComponent.end();
		iter1 != iter2;
		++iter1)
	{
		(*iter1)->Operation();
	}
}