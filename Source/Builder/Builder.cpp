/********************************************************************
	created:	2006/07/19
	filename: 	Builder.cpp
	author:		李创
                http://www.cppblog.com/converse/

	purpose:	Builder模式的演示代码
*********************************************************************/

#include "Builder.h"
#include <iostream>

void ConcreateBuilder1::BuilderPartA()
{
	std::cout << "BuilderPartA by ConcreateBuilder1\n";
}

void ConcreateBuilder1::BuilderPartB()
{
	std::cout << "BuilderPartB by ConcreateBuilder1\n";
}

void ConcreateBuilder2::BuilderPartA()
{
	std::cout << "BuilderPartA by ConcreateBuilder2\n";
}

void ConcreateBuilder2::BuilderPartB()
{
	std::cout << "BuilderPartB by ConcreateBuilder2\n";
}

Director::Director(Builder* pBuilder)
	: m_pBuilder(pBuilder)
{
}

Director::~Director()
{
	delete m_pBuilder;
	m_pBuilder = NULL;
}

// Construct函数表示一个对象的整个构建过程,不同的部分之间的装配方式都是一致的,
// 首先构建PartA其次是PartB,只是根据不同的构建者会有不同的表示
void Director::Construct()
{
	m_pBuilder->BuilderPartA();
	m_pBuilder->BuilderPartB();
}