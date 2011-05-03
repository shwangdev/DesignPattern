/********************************************************************
	created:	2006/07/26
	filename: 	Proxy.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Proxy模式的演示代码
*********************************************************************/

#include "Proxy.h"
#include <iostream>

RealSubject::RealSubject()
{
	std::cout << "Constructing a RealSubject\n";
}

void RealSubject::Request()
{
	std::cout << "Request By RealSubject\n";
}

Proxy::Proxy()
	: m_pRealSubject(NULL)
{
	std::cout << "Constructing a Proxy\n";
}

Proxy::~Proxy()
{
	delete m_pRealSubject;
	m_pRealSubject = NULL;
}

void Proxy::Request()
{
	// 需要使用RealSubject的时候才去初始化
	if (NULL == m_pRealSubject)
	{
		std::cout << "Request By Proxy\n";
		m_pRealSubject = new RealSubject();
	}
	m_pRealSubject->Request();
}
