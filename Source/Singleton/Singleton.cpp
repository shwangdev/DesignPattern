/********************************************************************
	created:	2006/07/20
	filename: 	Singleton.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Singleton模式的演示代码
*********************************************************************/

#include "Singleton.h"
#include <iostream>

// 类的静态成员变量要在类体外进行定义
Singleton* Singleton::m_pStatic = NULL;

Singleton* Singleton::GetInstancePtr()
{
	if (NULL == m_pStatic)
	{
		m_pStatic = new Singleton();
	}

	return m_pStatic;
}

Singleton Singleton::GetInstance()
{
	return *GetInstancePtr();
}

void Singleton::Test()
{
	std::cout << "Test!\n";
}