/********************************************************************
	created:	2006/07/19
	filename: 	AbstractFactory.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	AbstractFactory的演示代码
*********************************************************************/

#include <iostream>
#include "AbstractFactory.h"

ConcreateProductA1::ConcreateProductA1()
{
	std::cout << "construction of ConcreateProductA1\n";
}

ConcreateProductA1::~ConcreateProductA1()
{
	std::cout << "destruction of ConcreateProductA1\n";
}

ConcreateProductA2::ConcreateProductA2()
{
	std::cout << "construction of ConcreateProductA2\n";
}

ConcreateProductA2::~ConcreateProductA2()
{
	std::cout << "destruction of ConcreateProductA2\n";
}

ConcreateProductB1::ConcreateProductB1()
{
	std::cout << "construction of ConcreateProductB1\n";
}

ConcreateProductB1::~ConcreateProductB1()
{
	std::cout << "destruction of ConcreateProductB1\n";
}

ConcreateProductB2::ConcreateProductB2()
{
	std::cout << "construction of ConcreateProductB2\n";
}

ConcreateProductB2::~ConcreateProductB2()
{
	std::cout << "destruction of ConcreateProductB2\n";
}

ConcreateFactory1::ConcreateFactory1()
{
	std::cout << "construction of ConcreateFactory1\n";
}

ConcreateFactory1::~ConcreateFactory1()
{
	std::cout << "destruction of ConcreateFactory1\n";
}

AbstractProductA* ConcreateFactory1::CreateProductA()
{
	return new ConcreateProductA1();
}

AbstractProductB* ConcreateFactory1::CreateProductB()
{
	return new ConcreateProductB1();
}

ConcreateFactory2::ConcreateFactory2()
{
	std::cout << "construction of ConcreateFactory2\n";
}

ConcreateFactory2::~ConcreateFactory2()
{
	std::cout << "destruction of ConcreateFactory2\n";
}

AbstractProductA* ConcreateFactory2::CreateProductA()
{
	return new ConcreateProductA2();
}

AbstractProductB* ConcreateFactory2::CreateProductB()
{
	return new ConcreateProductB2();
}